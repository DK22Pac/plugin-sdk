#include <idc.idc>


static initFuncRedirectionInfo(mangledName, destination)
{
	auto redirectionInfo = object();
	redirectionInfo.mangledName = mangledName;
	redirectionInfo.destination = destination;
	
	return redirectionInfo;
}


extern redirectedFunctionsArray;
	
extern redirectedFunctionsArrayCount;


static AddRedirectionInfo(mangledName, destination)
{
	redirectedFunctionsArray[redirectedFunctionsArrayCount++] = initFuncRedirectionInfo(mangledName, destination);
}


static initArrayOfRedirectedFunctions()
{
	redirectedFunctionsArray = object();
	redirectedFunctionsArrayCount = 0;
	
	// PLEASE EDIT THIS PART. ADD REDIRECTION INFOS.
	AddRedirectionInfo("??0CBuilding@@QAE@XZ", 0x403E00);
	AddRedirectionInfo("??1CBuilding@@QAE@XZ", 0x404180);
	AddRedirectionInfo("??0CCoors@@QAE@XZ", 0x54F0C0);
	AddRedirectionInfo("??1CCoors@@QAE@XZ", 0x54E8E0);
	AddRedirectionInfo("??0CCutsceneShadow@@QAE@XZ", 0x706410);
	AddRedirectionInfo("??1CCutsceneShadow@@QAE@XZ", 0x706440);
	AddRedirectionInfo("??0CDummy@@QAE@XZ", 0x532540);
	AddRedirectionInfo("??1CDummy@@QAE@XZ", 0x532560);
	AddRedirectionInfo("??0CEntity@@QAE@XZ", 0x532A90);
	AddRedirectionInfo("??1CEntity@@QAE@XZ", 0x535E90);
	AddRedirectionInfo("??0CPhysical@@QAE@XZ", 0x542260);
	AddRedirectionInfo("??1CPhysical@@QAE@XZ", 0x542450);
	AddRedirectionInfo("??0CPlaceable@@QAE@XZ", 0x54F1E0);
	AddRedirectionInfo("??1CPlaceable@@QAE@XZ", 0x54F490);
	AddRedirectionInfo("??0CBaseModelInfo@@QAE@XZ", 0x4C4A60);
	AddRedirectionInfo("??1CBaseModelInfo@@QAE@XZ", 0x4C5510);
}


static redirectASMcode(source, destination)
{
	PatchByte(source++, 0xB8);
	PatchDword(source, destination);
	PatchWord(source + 4, 0xE0FF);
}


static patchFunctions()
{
	auto i;
	
	for(i = 0; i < redirectedFunctionsArrayCount; i++)
	{
		auto info = redirectedFunctionsArray[i];
		auto funcAddress = LocByName(info.mangledName);
		
		if(funcAddress == BADADDR)
		{
			Warning("Unable to find function with mangled name '%s'", info.mangledName);
			return 0;
		}
		
		redirectASMcode(funcAddress, info.destination);
	}
	
	Message("Patch applied successfully!\n");
	return 1;
}


static main() {


	Message("\nStarting plugin patch IDC script\n");


	initArrayOfRedirectedFunctions();
	patchFunctions();
}