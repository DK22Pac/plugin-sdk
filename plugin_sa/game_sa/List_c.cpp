# include "List_c.h"
# include <cassert>

// US-1.00 @ 0x004A8DD0
// EU-1.00 @ 0x004A8DD0
List_c::List_c(void) {
	reinterpret_cast<void (__thiscall *)(List_c *)>(0x004A8DD0)(this);
}

// US-1.00 @ 0x004A8DE0
// EU-1.00 @ 0x004A8DE0
List_c::~List_c(void) {
	reinterpret_cast<void (__thiscall *)(List_c *)>(0x004A8DE0)(this);
}

// US-1.00 @ 0x004A8DF0
// EU-1.00 @ 0x004A8DF0
void List_c::AddItem(ListItem_c * pItem) {
	assert(pItem);
	return reinterpret_cast<void (__thiscall *)(List_c *, ListItem_c *)>(0x004A8DF0)(this, pItem);
}

// US-1.00 @ 0x004A8E30
// EU-1.00 @ 0x004A8E30
void List_c::RemoveItem(ListItem_c * pItem) {
	assert(pItem);
	return reinterpret_cast<void (__thiscall *)(List_c *, ListItem_c *)>(0x004A8E30)(this, pItem);
}

ListItem_c * List_c::GetHead(void) {
	return first;
}

// EU-1.00 @ 0x004A8E70
ListItem_c * List_c::RemoveHead(void) {
	return reinterpret_cast<ListItem_c * (__thiscall *)(List_c *)>(0x004A8E70)(this);
}

ListItem_c * List_c::GetNext(ListItem_c * pItem) {
	assert(pItem);
	return pItem->next;
}

// US-1.00 @ 0x004A9000
// EU-1.00 @ 0x004A9000
ListItem_c * List_c::GetPrev(ListItem_c * pItem) {
	assert(pItem);
	return reinterpret_cast<ListItem_c * (__thiscall *)(List_c *, ListItem_c *)>(0x004A9000)(this, pItem);
}

// US-1.00 @ 0x004A9010
// EU-1.00 @ 0x004A9010
ListItem_c * List_c::GetItemOffset(Bool bFromHead, Int32 iOffset) {
	return reinterpret_cast<ListItem_c * (__thiscall *)(List_c *, Bool, Int32)>(0x004A9010)(this, bFromHead, iOffset);
}
