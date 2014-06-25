/*
 * Copyright (C) 2014  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 *
 *      Cross-compiler list
 *          Used to archieve memory sharing of a list between various compilers
 *          This class is missing features.
 *
 */
#pragma once
#include "internal/list.h"
#include "internal/shared.hpp"

#pragma pack(push, 1)

template<class T>                   // T should be an POD type!!!!!!!
class SharedList : public list_head
{
    private:
        T object;
    
        // Every method should call this before doing anything
        // This is used because of our allocation model on the SharedData
        void init()
        {
            if(this->next == 0) // Check if has been initialized
            {
                // Nope, inititialize it
                list_ctor(this);
            }
        }
    
    public:
        typedef SharedList  ListHead;
        
        struct iterator;
        typedef const iterator const_iterator;
        typedef T& reference;
        typedef T* pointer;
    
    public:
        SharedList()
        {
            init();
        }
        
        SharedList(const T& rhs) : object(rhs)
        {
            init();
        }
        
        ~SharedList()
        {
            init();
            list_del(this);
        }
    
        iterator begin()
        {
            init();
            return iterator(this->next);
        }
        
        iterator end()
        {
            init();
            return iterator(this);
        }
        
        bool empty()
        {
            init();
            return list_empty(this);
        }

        void push_back(const T& obj)
        {
            init();
            ListHead* add = new ListHead(obj);
            list_add_tail(this, add);
        }
        
        void emplace_back()
        {
            init();
            ListHead* add = new ListHead();
            list_add_tail(this, add);
        }
        
        T& front()
        {
            return static_cast<ListHead*>(this->next)->object;
        }
        
        T& back()
        {
            return static_cast<ListHead*>(this->prev)->object;
        }
        
        iterator erase(const_iterator position)
        {
            init();
            iterator r = position; ++r;
            delete position.curr;
            return r;
        }
        
        void remove(const T& obj)
        {
            init();
            for(auto it = begin(); it != end(); )
            {
                if(*it == obj) it = erase(it);
                else ++it;
            }
        }
        
        
        static void* operator new(size_t size)
        {
            auto& cbm = ControllerBlockManager::GetInstance();
            return cbm.Alloc(sizeof(ListHead), true);
        }
        
        static void operator delete(void* ptr)
        {
            auto& cbm = ControllerBlockManager::GetInstance();
            cbm.Free(ptr);
        }
        
        
    public:
        struct iterator
        {
            ListHead *curr;
            
            iterator()
            {}
            
            iterator(const iterator& rhs) : curr(rhs.curr)
            {}
            
            iterator(list_head* x) : curr(static_cast<ListHead*>(x))
            {}
            
            iterator& operator=(const iterator& rhs)
            {
                this->curr = rhs.curr;
            }
            
            iterator& operator++()
            {
                curr = static_cast<ListHead*>(curr->next);
                return *this;
            }
            
            iterator operator++(int)
            {
                curr = static_cast<ListHead*>(curr->next);
                return iterator(curr->prev);
            }
            
            iterator& operator--()
            {
                curr = static_cast<ListHead*>(curr->prev);
                return *this;
            }
            
            iterator operator--(int)
            {
                curr = static_cast<ListHead*>(curr->prev);
                return iterator(curr->next);
            }
            
            bool operator==(const iterator& rhs)
            {
                return (this->curr == rhs.curr);
            }
            
            bool operator!=(const iterator& rhs)
            {
                return (this->curr != rhs.curr);
            }
            
            reference operator*()
            {
                return this->curr->object;
            }
            
            pointer operator->()
            {
                return &this->curr->object;
            }
        };
};


#pragma pack(pop)

