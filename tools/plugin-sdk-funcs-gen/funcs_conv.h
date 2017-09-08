// header


    //funcs

    static void Initialise();
    static void ShutDown();
    static void CheckPoolsEmpty();
    static void GetPedRef(CPed* ped);
    static CPed* GetPed(int handle);
    static CVehicle* GetVehicleRef(CVehicle* vehicle);
    static void GetVehicle(int handle);
    static void GetObjectRef(CObject* object);
    static CObject* GetObject(int handle);
    static void LoadVehiclePool(unsigned char* buffer, unsigned int size);
    static void SaveVehiclePool(unsigned char* buffer, unsigned int* outSize);
    static void SaveObjectPool(unsigned char* buffer, unsigned int* outSize);
    static void LoadObjectPool(unsigned char* buffer, unsigned int size);
    static void SavePedPool(unsigned char* buffer, unsigned int* outSize);
    static void LoadPedPool(unsigned char* buffer, unsigned int size);
    static void MakeSureSlotInObjectPoolIsEmpty(int slot);

// source

// Converted from cdecl void CPools::Initialise(void) 0x4A1770
void CPools::Initialise() {
    plugin::Call<0x4A1770>();
}

// Converted from cdecl void CPools::ShutDown(void) 0x4A1880
void CPools::ShutDown() {
    plugin::Call<0x4A1880>();
}

// Converted from cdecl void CPools::CheckPoolsEmpty(void) 0x4A1A50
void CPools::CheckPoolsEmpty() {
    plugin::Call<0x4A1A50>();
}

// Converted from cdecl void CPools::GetPedRef(CPed *ped) 0x4A1A80
void CPools::GetPedRef(CPed* ped) {
    plugin::Call<0x4A1A80, CPed*>(ped);
}

// Converted from cdecl CPed* CPools::GetPed(int handle) 0x4A1AA0
CPed* CPools::GetPed(int handle) {
    return plugin::CallAndReturn<CPed*, 0x4A1AA0, int>(handle);
}

// Converted from cdecl CVehicle* CPools::GetVehicleRef(CVehicle *vehicle) 0x4A1AC0
CVehicle* CPools::GetVehicleRef(CVehicle* vehicle) {
    return plugin::CallAndReturn<CVehicle*, 0x4A1AC0, CVehicle*>(vehicle);
}

// Converted from cdecl void CPools::GetVehicle(int handle) 0x4A1AE0
void CPools::GetVehicle(int handle) {
    plugin::Call<0x4A1AE0, int>(handle);
}

// Converted from cdecl void CPools::GetObjectRef(CObject *object) 0x4A1B00
void CPools::GetObjectRef(CObject* object) {
    plugin::Call<0x4A1B00, CObject*>(object);
}

// Converted from cdecl CObject* CPools::GetObject(int handle) 0x4A1B20
CObject* CPools::GetObject(int handle) {
    return plugin::CallAndReturn<CObject*, 0x4A1B20, int>(handle);
}

// Converted from cdecl void CPools::LoadVehiclePool(uchar *buffer,uint size) 0x4A1B40
void CPools::LoadVehiclePool(unsigned char* buffer, unsigned int size) {
    plugin::Call<0x4A1B40, unsigned char*, unsigned int>(buffer, size);
}

// Converted from cdecl void CPools::SaveVehiclePool(uchar *buffer,uint *outSize) 0x4A2080
void CPools::SaveVehiclePool(unsigned char* buffer, unsigned int* outSize) {
    plugin::Call<0x4A2080, unsigned char*, unsigned int*>(buffer, outSize);
}

// Converted from cdecl void CPools::SaveObjectPool(uchar *buffer,uint *outSize) 0x4A22D0
void CPools::SaveObjectPool(unsigned char* buffer, unsigned int* outSize) {
    plugin::Call<0x4A22D0, unsigned char*, unsigned int*>(buffer, outSize);
}

// Converted from cdecl void CPools::LoadObjectPool(uchar *buffer,uint size) 0x4A2550
void CPools::LoadObjectPool(unsigned char* buffer, unsigned int size) {
    plugin::Call<0x4A2550, unsigned char*, unsigned int>(buffer, size);
}

// Converted from cdecl void CPools::SavePedPool(uchar *buffer,uint *outSize) 0x4A29B0
void CPools::SavePedPool(unsigned char* buffer, unsigned int* outSize) {
    plugin::Call<0x4A29B0, unsigned char*, unsigned int*>(buffer, outSize);
}

// Converted from cdecl void CPools::LoadPedPool(uchar *buffer,uint size) 0x4A2B50
void CPools::LoadPedPool(unsigned char* buffer, unsigned int size) {
    plugin::Call<0x4A2B50, unsigned char*, unsigned int>(buffer, size);
}

// Converted from cdecl void CPools::MakeSureSlotInObjectPoolIsEmpty(int slot) 0x4A2DB0
void CPools::MakeSureSlotInObjectPoolIsEmpty(int slot) {
    plugin::Call<0x4A2DB0, int>(slot);
}

