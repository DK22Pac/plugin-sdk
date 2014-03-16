#pragma once
#include "plugin\plugin.h"

struct tPoolObjectFlags
{
	char seed : 7;			// used to validate SCM handles
	char bIsFreeSlot : 1;
};

#pragma pack(push, 1)
template<class A, class B = A> class CPool
{
public:
	B* m_Objects;
	tPoolObjectFlags* m_ByteMap;
	__int32 m_Size;		// max number of objects.
	__int32 m_Top;		// count of objects - 1
	bool m_bInitialized;
	char m_Field_11;

	__int16 m_Pad;

	// Initializes pool
	CPool(int maxCount, const char* poolName)
	{
		this -> m_Objects = new B[maxCount];

		this -> m_ByteMap = new tPoolObjectFlags[maxCount];

		this -> m_bInitialized = true;

		this -> m_Size = maxCount;

		this -> m_Top = -1;

		for(int i = 0; i < maxCount; i++)
			this -> m_ByteMap[i].bIsFreeSlot = true;
	}

	~CPool()
	{
		Flush();
	};

	// Shutdown pool
	void Flust()
	{
		if(this -> m_bInitialized)
		{
			delete this -> m_Objects;
			delete this -> m_ByteMap;
		}

		this -> m_Objects = NULL;
		this -> m_ByteMap = NULL;
		this -> m_Size = 0;
		this -> m_Top = 0;
		this -> m_bInitialized = false;
	}

	// Clears pool
	void Clear()
	{
		if(!this -> m_bInitialized)
			return;

		for(int i = 0; i < this -> m_Size; i++)
			this -> m_ByteMap[i].bIsFreeSlot = true;
	}

	// Returns pointer to object by index
	A* GetAt(int idx)
	{
		if(this -> m_ByteMap[idx].seed)
		{
			return &this -> m_Objects[idx];
		}
		else
			return nullptr;
	}

	// Returns if specified slot is free (0x404940)
	bool IsFreeSlotAtIndex(int idx)
	{
		return this -> m_ByteMap[idx].bIsFreeSlot;
	}

	// Marks slot as free / used (0x404970)
	void SetNotFreeAt(int idx, char bIsSlotFree)
	{
		this -> m_ByteMap[idx].bIsFreeSlot = bIsSlotFree;
	}

	// Returns seed of object pointed by index (0x59F5F0)
	char GetSeedAtIndex(int idx)
	{
		return this -> m_ByteMap[idx].seed;
	}

	// Allocates object
	A* New()
	{
		int startSearchFrom = this -> m_Top + 1;
		int searchTo = this -> m_Size;
		bool bSearchingFromBeginningDone = false;

		this -> m_Top++;

		while(true)
		{
			while(true)
			{
				if(this -> m_Top == searchTo)
					break;

				tPoolObjectFlags* objectFlags = &this -> m_ByteMap[this -> m_Top];

				if(objectFlags -> bIsFreeSlot)
				{
					objectFlags -> bIsFreeSlot = false;
					objectFlags -> seed = objectFlags -> seed ^ (objectFlags -> seed + 1);
					return &this -> m_Objects[this -> m_Top];
				}

				this -> m_Top++;
			}

			this -> m_Top = 0;

			if(!bSearchingFromBeginningDone)
			{
				searchTo = startSearchFrom;
				bSearchingFromBeginningDone = true;
			}
			else
				return NULL;
		}
	}

	// Deallocates object
	void Delete(A* pObject)
	{
		int idx = pObject - this -> m_Objects;

		this -> m_ByteMap[idx].bIsFreeSlot = true;
	}

	// Returns SCM handle for object
	int GetIndex(A* pObject)
	{
		int idx = pObject - this -> m_Objects;

		return idx * 256 + this -> m_ByteMap[idx].seed;
	}

	// Returns pointer to object by SCM handle
	A* AtHandle(int handle)
	{
		int idx = handle / 256;

		return idx < this -> m_Size && *(BYTE*)&this -> m_ByteMap[idx] == *(BYTE*)&handle ? &this -> m_Objects[idx] : NULL;
	}
};
#pragma pack(pop)

VALIDATE_SIZE(CPool<int>, 0x14);