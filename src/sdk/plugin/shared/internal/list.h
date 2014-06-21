/*
 *    Copyright (c) 2013 Denilson das Merces Amorim <dma_2012@hotmail.com>
 *
 *    This software is provided 'as-is', without any express or implied
 *    warranty. In no event will the authors be held liable for any damages
 *    arising from the use of this software.
 *
 *    Permission is granted to anyone to use this software for any purpose,
 *    including commercial applications, and to alter it and redistribute it
 *    freely, subject to the following restrictions:
 *
 *       1. The origin of this software must not be misrepresented; you must not
 *       claim that you wrote the original software. If you use this software
 *       in a product, an acknowledgment in the product documentation would be
 *       appreciated but is not required.
 *
 *       2. Altered source versions must be plainly marked as such, and must not be
 *       misrepresented as being the original software.
 *
 *       3. This notice may not be removed or altered from any source
 *       distribution.
**/
#ifndef _LINKS_LIST_H
#define _LINKS_LIST_H
#pragma once

/*
    This is my implementation of a C Circular Doubly Linked List.
    It's based on Linux Kernel list. Implemented by myself for licensing and cross platform reasons (original is GPL and targets GCC).
    
    Usage is (almost) similar to Linux list.h
    Example here: http://isis.poly.edu/kulesh/stuff/src/klist/

    Need fix: Since it's macro expanded, the parameters can't be ->next or ->last, example: list_del(head->next, elem);
*/

#include <stddef.h>

struct list_head
{
    struct list_head *prev;
    struct list_head *next;
};

/* Returns a initialized list with self as the head
    Usage example: struct list_head head = list_ctor(&head);
*/
#define list_init(self) { self, self }

/*
    Constructs a list head
*/
#define list_ctor(self)\
    ((self)->prev = (self)->next = self)

/*
    Adds a node after self
*/
#define list_add(self_, add_)\
    do {  struct list_head *__prev = (self_), *__next = (self_)->next, *__add = (add_);\
          (__next->prev = __add, __add->next = __next, __add->prev = __prev, __prev->next = __add);\
    } while(0)

/*
    Adds a node before self
*/
#define list_add_tail(self, add)\
    list_add((self)->prev, add)

/*
    Removes a node from a list
*/
#define list_del(self)\
    ((self)->next->prev = (self)->prev, (self)->prev->next = (self)->next, list_ctor(self))

/*
    Returns true if the list is empty
*/
#define list_empty(self)\
    ((self) == (self)->next)

/*
    Gets the object (struct) the list is attached to
*/
#define list_entry(self, type)\
    ((type*)(((char*)(self)) - offsetof(type, node)))

/*
    Foreach node in a list
*/
#define list_foreach_xwd(self, it, direction)\
    for((it) = (self)->direction; (it) != (self); (it) = (it)->direction)

/*
    Foreach node in a list, safe to remove nodes during iteration
*/
#define list_foreach_safe_xwd(self, it, tmp, direction)\
    for((it) = (self)->direction, (tmp) = (it)->direction; (it) != (self); (it) = (tmp), (tmp) = (it)->direction)

/*
    Foreach entry in a list
*/
#define list_foreach_entry_xwd(self, it, entry, type, direction)\
    for((it) = (self)->direction, (entry) = list_entry((it), type); (it) != (self); (it) = (it)->direction, (entry) = list_entry((it), type))

/*
    Simple foreaches. fwd = forward; bwd = backward
*/
#define list_foreach_fwd(self, it)                      list_foreach_xwd(self, it, next)
#define list_foreach_bwd(self, it)                      list_foreach_xwd(self, it, prev)
#define list_foreach_safe_fwd(self, it, tmp)            list_foreach_safe_xwd(self, it, tmp, next)
#define list_foreach_safe_bwd(self, it, tmp)            list_foreach_safe_xwd(self, it, tmp, prev)
#define list_foreach_entry_fwd(self, it, entry, type)   list_foreach_entry_xwd(self, it, entry, type, next)
#define list_foreach_entry_bwd(self, it, entry, type)   list_foreach_entry_xwd(self, it, entry, type, prev)

/*
    Simplest foreaches. Goes forward.
*/
#define list_foreach(self, it)                      list_foreach_fwd(self, it)
#define list_foreach_safe(self, it, tmp)            list_foreach_safe_fwd(self, it, tmp)
#define list_foreach_entry(self, it, entry, type)   list_foreach_entry_fwd(self, it, entry, type)

#endif
