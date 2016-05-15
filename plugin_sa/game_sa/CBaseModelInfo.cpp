#include "CBaseModelInfo.h"

CBaseModelInfo *CBaseModelInfo::AsAtomicModelInfoPtr()
{
	return ((CBaseModelInfo *(__thiscall *)(CBaseModelInfo *))GetVMT(this, 1))(this);
}

CBaseModelInfo *CBaseModelInfo::AsDamageAtomicModelInfoPtr()
{
	return ((CBaseModelInfo *(__thiscall *)(CBaseModelInfo *))GetVMT(this, 2))(this);
}

CBaseModelInfo *CBaseModelInfo::AsLodAtomicModelInfoPtr()
{
	return ((CBaseModelInfo *(__thiscall *)(CBaseModelInfo *))GetVMT(this, 3))(this);
}

ModelInfoType CBaseModelInfo::GetModelType()
{
	return ((ModelInfoType (__thiscall *)(CBaseModelInfo *))GetVMT(this, 4))(this);
}

struct tTimeInfo *CBaseModelInfo::GetTimeInfo()
{
	return ((struct tTimeInfo *(__thiscall *)(CBaseModelInfo *))GetVMT(this, 5))(this);
}

void CBaseModelInfo::Init()
{
	((void (__thiscall *)(CBaseModelInfo *))GetVMT(this, 6))(this);
}

void CBaseModelInfo::Shutdown()
{
	((void (__thiscall *)(CBaseModelInfo *))GetVMT(this, 7))(this);
}

void CBaseModelInfo::DeleteRwObject()
{
	((void (__thiscall *)(CBaseModelInfo *))GetVMT(this, 8))(this);
}

unsigned int CBaseModelInfo::GetRwModelType()
{
	return ((unsigned int (__thiscall *)(CBaseModelInfo *))GetVMT(this, 9))(this);
}

RwObject *CBaseModelInfo::CreateInstance(RwMatrix *matrix)
{
	return ((RwObject *(__thiscall *)(CBaseModelInfo *, RwMatrix *))GetVMT(this, 10))(this, matrix);
}

RwObject *CBaseModelInfo::CreateInstance()
{
	return ((RwObject *(__thiscall *)(CBaseModelInfo *))GetVMT(this, 11))(this);
}

void CBaseModelInfo::SetAnimFile(char *filename)
{
	((void (__thiscall *)(CBaseModelInfo *, char *))GetVMT(this, 12))(this, filename);
}

void CBaseModelInfo::ConvertAnimFileIndex()
{
	((void (__thiscall *)(CBaseModelInfo *))GetVMT(this, 13))(this);
}

signed int CBaseModelInfo::GetAnimFileIndex()
{
	return ((signed int (__thiscall *)(CBaseModelInfo *))GetVMT(this, 14))(this);
}

void CBaseModelInfo::SetTexDictionary(char *txdName)
{
	((void (__thiscall *)(CBaseModelInfo *, char *))0x4C4B40)(this, txdName);
}

void CBaseModelInfo::ClearTexDictionary()
{
	((void (__thiscall *)(CBaseModelInfo *))0x4C4B70)(this);
}

void CBaseModelInfo::AddTexDictionaryRef()
{
	((void (__thiscall *)(CBaseModelInfo *))0x4C4B80)(this);
}

void CBaseModelInfo::RemoveTexDictionaryRef()
{
	((void (__thiscall *)(CBaseModelInfo *))0x4C4B90)(this);
}

void CBaseModelInfo::AddRef()
{
	((void (__thiscall *)(CBaseModelInfo *))0x4C4BA0)(this);
}

void CBaseModelInfo::RemoveRef()
{
	((void (__thiscall *)(CBaseModelInfo *))0x4C4BB0)(this);
}

void CBaseModelInfo::SetColModel(CColModel *colModel, bool initPairedModel)
{
	((void (__thiscall *)(CBaseModelInfo *, bool))0x4C4BC0)(this, initPairedModel);
}

void CBaseModelInfo::Init2dEffects()
{
	((void (__thiscall *)(CBaseModelInfo *))0x4C4C20)(this);
}

void CBaseModelInfo::DeleteCollisionModel()
{
	((void (__thiscall *)(CBaseModelInfo *))0x4C4C40)(this);
}

C2dEffect *CBaseModelInfo::Get2dEffect(int index)
{
	return ((C2dEffect *(__thiscall *)(CBaseModelInfo *, int))0x4C4C70)(this, index);
}

void CBaseModelInfo::Add2dEffect(C2dEffect *effect)
{
	((void (__thiscall *)(CBaseModelInfo *, C2dEffect *))0x4C4D20)(this, effect);
}