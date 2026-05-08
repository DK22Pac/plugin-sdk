/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

// name made up
class PLUGIN_API CAnimBlendLink {
public:
	CAnimBlendLink *next;
	CAnimBlendLink *prev;

	void Init(void){
		next = nullptr;
		prev = nullptr;
	}
	void Prepend(CAnimBlendLink *link){
		if(next)
		        next->prev = link;
		link->next = next;
		link->prev = this;
		next = link;
	}
	void Remove(void){
		if(prev)
			prev->next = next;
		if(next)
			next->prev = prev;
		Init();
	}
};
VALIDATE_OFFSET(CAnimBlendLink, next, 0x0);
VALIDATE_OFFSET(CAnimBlendLink, prev, 0x4);
VALIDATE_SIZE(CAnimBlendLink, 0x8);
