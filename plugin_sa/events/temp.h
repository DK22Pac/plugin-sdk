/*
GTASA C++ SDK
See README.md for more details
DK22Pac, 2015
*/

#pragma once
#include <vector>
#include "additional\patch\Patch.h"

#define PRIORITY_BEFORE 0
#define PRIORITY_AFTER 1

class CPed;
class CVehicle;
class CObject;

namespace plugin
{
	// base class

	template <typename FuncOriginal, typename FuncCallback, int Priority, int InjectionType, int Addr>
	class f_list_base{
	protected:
		bool redirected;
		FuncOriginal original, execute;

		virtual void inject(){
			patch::MakeInject(InjectionType, Addr, execute, original);
		}
	public:
		static void *pMe;
		struct f_list{
			std::vector<FuncCallback> vec;
			f_list& operator+=(FuncCallback function){
				if (!reinterpret_cast<f_list_base<FuncOriginal, FuncCallback, Priority, InjectionType, Addr> *>(pMe)->redirected){
					reinterpret_cast<f_list_base<FuncOriginal, FuncCallback, Priority, InjectionType, Addr> *>(pMe)->inject();
					reinterpret_cast<f_list_base<FuncOriginal, FuncCallback, Priority, InjectionType, Addr> *>(pMe)->redirected = true;
				}
				vec.push_back(function);
				return *this;
			}
		} before, after;

		f_list_base& operator+=(FuncCallback function){
			if (Priority)
				after += function;
			else
				before += function;
			return *this;
		}

		f_list_base() : redirected(false) {}
	};

	// base cdecl

	template <typename FuncOriginal, int Priority, int InjectionType, int Addr, typename ...ArgTypes>
	class f_list_cdecl : public f_list_base<FuncOriginal, void(__cdecl*)(), Priority, InjectionType, Addr>{
	protected:
		static int __cdecl funcexe(ArgTypes... Args){
			int result = 0;
			for (auto &i : reinterpret_cast<f_list_cdecl<FuncOriginal, Priority, InjectionType, Addr, ArgTypes...> *>(pMe)->before.vec) { i(); }
			if (reinterpret_cast<f_list_cdecl<FuncOriginal, Priority, InjectionType, Addr, ArgTypes...> *>(pMe)->original)
				result = reinterpret_cast<f_list_cdecl<FuncOriginal, Priority, InjectionType, Addr, ArgTypes...> *>(pMe)->original(Args...);
			for (auto &i : reinterpret_cast<f_list_cdecl<FuncOriginal, Priority, InjectionType, Addr, ArgTypes...> *>(pMe)->after.vec) { i(); }
			return result;
		}
	public:
		f_list_cdecl(){
			this->execute = funcexe;
		}
	};

	// base thiscall

	template <typename FuncOriginal, int Priority, int InjectionType, int Addr, typename ThisType, typename ...ArgTypes>
	class f_list_thiscall : public f_list_base<FuncOriginal, void(__cdecl*)(ThisType), Priority, InjectionType, Addr>{
	protected:
		static int __fastcall funcexe(ThisType This, ArgTypes... Args){
			int result = 0;
			for (auto &i : reinterpret_cast<f_list_thiscall<FuncOriginal, Priority, InjectionType, Addr, ThisType, ArgTypes...> *>(pMe)->before.vec) { i(This); }
			if (reinterpret_cast<f_list_thiscall<FuncOriginal, Priority, InjectionType, Addr, ThisType, ArgTypes...> *>(pMe)->original)
				result = reinterpret_cast<f_list_thiscall<FuncOriginal, Priority, InjectionType, Addr, ThisType, ArgTypes...> *>(pMe)->original(This, Args...);
			for (auto &i : reinterpret_cast<f_list_thiscall<FuncOriginal, Priority, InjectionType, Addr, ThisType, ArgTypes...> *>(pMe)->after.vec) { i(This); }
			return result;
		}
	public:
		f_list_thiscall(){
			this->execute = funcexe;
		}
	};

	// complex

	template <typename FuncOriginal, int Priority, int InjectionType, int Addr1, int Addr2, typename ThisType, typename ...ArgTypes>
	class f_list_thiscall_2 : public f_list_thiscall<FuncOriginal, Priority, InjectionType, Addr1, ThisType, ArgTypes...>{
	protected:
		FuncOriginal original2;

		static int __fastcall funcexe2(ThisType This, ArgTypes... Args){
			int result = 0;
			for (auto &i : reinterpret_cast<f_list_thiscall_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ThisType, ArgTypes...> *>(pMe)->before.vec) { i(This); }
			if (reinterpret_cast<f_list_thiscall_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ThisType, ArgTypes...> *>(pMe)->original2)
				result = reinterpret_cast<f_list_thiscall_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ThisType, ArgTypes...> *>(pMe)->original2(This, Args...);
			for (auto &i : reinterpret_cast<f_list_thiscall_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ThisType, ArgTypes...> *>(pMe)->after.vec) { i(This); }
			return result;
		}

		void inject(){
			f_list_thiscall<FuncOriginal, Priority, InjectionType, Addr1, ThisType, ArgTypes...>::inject();
			patch::MakeInject(InjectionType, Addr2, funcexe2, original2);
		}
	};

	template <typename FuncOriginal, int Priority, int InjectionType, int Addr1, int Addr2, typename ...ArgTypes>
	class f_list_cdecl_2 : public f_list_cdecl<FuncOriginal, Priority, InjectionType, Addr1, ArgTypes...>{
	protected:
		FuncOriginal original2;

		static int __cdecl funcexe2(ArgTypes... Args){
			int result = 0;
			for (auto &i : reinterpret_cast<f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...> *>(pMe)->before.vec) { i(); }
			if (reinterpret_cast<f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...> *>(pMe)->original2)
				result = reinterpret_cast<f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...> *>(pMe)->original2(Args...);
			for (auto &i : reinterpret_cast<f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...> *>(pMe)->after.vec) { i(); }
			return result;
		}

		void inject(){
			f_list_cdecl<FuncOriginal, Priority, InjectionType, Addr1, ArgTypes...>::inject();
			patch::MakeInject(InjectionType, Addr2, funcexe2, original2);
		}
	};

	template <typename FuncOriginal, int Priority, int InjectionType, int Addr1, int Addr2, int Addr3, typename ...ArgTypes>
	class f_list_cdecl_3 : public f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...>{
	protected:
		FuncOriginal original3;

		static int __cdecl funcexe3(ArgTypes... Args){
			int result = 0;
			for (auto &i : reinterpret_cast<f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...> *>(pMe)->before.vec) { i(); }
			if (reinterpret_cast<f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...> *>(pMe)->original3)
				result = reinterpret_cast<f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...> *>(pMe)->original3(Args...);
			for (auto &i : reinterpret_cast<f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...> *>(pMe)->after.vec) { i(); }
			return result;
		}

		void inject(){
			f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...>::inject();
			patch::MakeInject(InjectionType, Addr3, funcexe3, original3);
		}
	};

	template <typename FuncOriginal, int Priority, int InjectionType, int Addr1, int Addr2, int Addr3, int Addr4, typename ...ArgTypes>
	class f_list_cdecl_4 : public f_list_cdecl_3<FuncOriginal, Priority, InjectionType, Addr1, Addr2, Addr3, ArgTypes...>{
	protected:
		FuncOriginal original4;

		static int __cdecl funcexe3(ArgTypes... Args){
			int result = 0;
			for (auto &i : reinterpret_cast<f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...> *>(pMe)->before.vec) { i(); }
			if (reinterpret_cast<f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...> *>(pMe)->original3)
				result = reinterpret_cast<f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...> *>(pMe)->original3(Args...);
			for (auto &i : reinterpret_cast<f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...> *>(pMe)->after.vec) { i(); }
			return result;
		}

		void inject(){
			f_list_cdecl_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ArgTypes...>::inject();
			patch::MakeInject(InjectionType, Addr3, funcexe3, original3);
		}
	};

	template <typename FuncOriginal, int Priority, int Addr1, int Addr2, typename ThisType, typename ...ArgTypes>
	class f_list_thiscall_2_call_jmp : public f_list_thiscall_2<FuncOriginal, Priority, INJECT_CALL, Addr1, Addr2, ThisType, ArgTypes...>{
		void inject(){
			patch::MakeInject(INJECT_CALL, Addr1, this->execute, this->original);
			patch::MakeInject(INJECT_JUMP, Addr2, funcexe2, original2);
		}
	};

	template <typename FuncOriginal, int Priority, int InjectionType, int Addr1, int Addr2, int Addr3, int Addr4, int Addr5, typename ThisType, typename ...ArgTypes>
	class f_list_thiscall_5 : public f_list_thiscall_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ThisType, ArgTypes...>{
		FuncOriginal original3, original4, original5;

		static int __fastcall funcexe3(ThisType This, ArgTypes... Args){
			int result = 0;
			for (auto &i : reinterpret_cast<f_list_thiscall_5<FuncOriginal, Priority, InjectionType, Addr1, Addr2, Addr3, Addr4, Addr5, ThisType, ArgTypes...> *>(pMe)->before.vec) { i(This); }
			if (reinterpret_cast<f_list_thiscall_5<FuncOriginal, Priority, InjectionType, Addr1, Addr2, Addr3, Addr4, Addr5, ThisType, ArgTypes...> *>(pMe)->original3)
				result = reinterpret_cast<f_list_thiscall_5<FuncOriginal, Priority, InjectionType, Addr1, Addr2, Addr3, Addr4, Addr5, ThisType, ArgTypes...> *>(pMe)->original3(This, Args...);
			for (auto &i : reinterpret_cast<f_list_thiscall_5<FuncOriginal, Priority, InjectionType, Addr1, Addr2, Addr3, Addr4, Addr5, ThisType, ArgTypes...> *>(pMe)->after.vec) { i(This); }
			return result;
		}

		static int __fastcall funcexe4(ThisType This, ArgTypes... Args){
			int result = 0;
			for (auto &i : reinterpret_cast<f_list_thiscall_5<FuncOriginal, Priority, InjectionType, Addr1, Addr2, Addr3, Addr4, Addr5, ThisType, ArgTypes...> *>(pMe)->before.vec) { i(This); }
			if (reinterpret_cast<f_list_thiscall_5<FuncOriginal, Priority, InjectionType, Addr1, Addr2, Addr3, Addr4, Addr5, ThisType, ArgTypes...> *>(pMe)->original4)
				result = reinterpret_cast<f_list_thiscall_5<FuncOriginal, Priority, InjectionType, Addr1, Addr2, Addr3, Addr4, Addr5, ThisType, ArgTypes...> *>(pMe)->original4(This, Args...);
			for (auto &i : reinterpret_cast<f_list_thiscall_5<FuncOriginal, Priority, InjectionType, Addr1, Addr2, Addr3, Addr4, Addr5, ThisType, ArgTypes...> *>(pMe)->after.vec) { i(This); }
			return result;
		}

		static int __fastcall funcexe5(ThisType This, ArgTypes... Args){
			int result = 0;
			for (auto &i : reinterpret_cast<f_list_thiscall_5<FuncOriginal, Priority, InjectionType, Addr1, Addr2, Addr3, Addr4, Addr5, ThisType, ArgTypes...> *>(pMe)->before.vec) { i(This); }
			if (reinterpret_cast<f_list_thiscall_5<FuncOriginal, Priority, InjectionType, Addr1, Addr2, Addr3, Addr4, Addr5, ThisType, ArgTypes...> *>(pMe)->original5)
				result = reinterpret_cast<f_list_thiscall_5<FuncOriginal, Priority, InjectionType, Addr1, Addr2, Addr3, Addr4, Addr5, ThisType, ArgTypes...> *>(pMe)->original5(This, Args...);
			for (auto &i : reinterpret_cast<f_list_thiscall_5<FuncOriginal, Priority, InjectionType, Addr1, Addr2, Addr3, Addr4, Addr5, ThisType, ArgTypes...> *>(pMe)->after.vec) { i(This); }
			return result;
		}

		void inject(){
			f_list_thiscall_2<FuncOriginal, Priority, InjectionType, Addr1, Addr2, ThisType, ArgTypes...>::inject();
			patch::MakeInject(InjectionType, Addr3, funcexe3, original3);
			patch::MakeInject(InjectionType, Addr4, funcexe4, original4);
			patch::MakeInject(InjectionType, Addr5, funcexe5, original5);
		}
	};

#define EV_DRAWING_EVENT          f_list_cdecl<int(__cdecl*)(), PRIORITY_AFTER, INJECT_CALL, 0x53E293>
#define EV_DRAWHUD_EVENT          f_list_cdecl<int(__cdecl*)(), PRIORITY_AFTER, INJECT_CALL, 0x53E4FF>
#define EV_DRAWRADAR_EVENT        f_list_cdecl<int(__cdecl*)(), PRIORITY_AFTER, INJECT_CALL, 0x58FC53>
#define EV_DRAWRADARBLIPS_EVENT   f_list_cdecl<int(__cdecl*)(), PRIORITY_AFTER, INJECT_JUMP, 0x58AA2D>
#define EV_DRAWMENUMAPBLIPS_EVENT f_list_cdecl<int(__cdecl*)(), PRIORITY_AFTER, INJECT_CALL, 0x575B44>
#define EV_INITRW_EVENT           f_list_cdecl<int(__cdecl*)(), PRIORITY_AFTER, INJECT_CALL, 0x5BF3A1>
#define EV_SHUTDOWNRW_EVENT       f_list_cdecl<int(__cdecl*)(), PRIORITY_BEFORE, INJECT_CALL, 0x53D910>
#define EV_VEHICLECTOR_EVENT      f_list_thiscall<int(__fastcall*)(CVehicle*), PRIORITY_AFTER, INJECT_CALL, 0x6D5F2F, CVehicle*>
#define EV_VEHICLEDTOR_EVENT      f_list_thiscall<int(__fastcall*)(CVehicle*), PRIORITY_BEFORE, INJECT_CALL, 0x6E2D35, CVehicle*>
#define EV_PEDCTOR_EVENT          f_list_thiscall<int(__fastcall*)(CPed*), PRIORITY_AFTER, INJECT_CALL, 0x5E8052, CPed*>
#define EV_PEDDTOR_EVENT          f_list_thiscall<int(__fastcall*)(CPed*), PRIORITY_BEFORE, INJECT_CALL, 0x5E880C, CPed*>
#define EV_OBJECTCTOR_EVENT       f_list_thiscall_5<int(__fastcall*)(CObject*), PRIORITY_AFTER, INJECT_CALL, 0x5A1D2D, 0x5A1D8D, 0x5A1E0E, 0x5A1FA3, 0x5A2018, CObject*>
#define EV_OBJECTDTOR_EVENT       f_list_thiscall<int(__fastcall*)(CObject*), PRIORITY_BEFORE, INJECT_CALL, 0x59F82A, CObject*>
#define EV_INITPOOLS_EVENT        f_list_cdecl<int(__cdecl*)(), PRIORITY_AFTER, INJECT_CALL, 0x5BF85B>
#define EV_SHUTDOWNPOOLS_EVENT    f_list_cdecl<int(__cdecl*)(), PRIORITY_AFTER, INJECT_CALL, 0x53CA5C>
#define EV_VEHICLERENDER_EVENT    f_list_thiscall_2_call_jmp<int(__fastcall*)(CVehicle*), PRIORITY_BEFORE, 0x6C4523, 0x6D0E89, CVehicle*>
#define EV_PEDRENDER_EVENT        f_list_thiscall_2<int(__fastcall*)(CPed*), PRIORITY_BEFORE, INJECT_CALL, 0x5E77FC, 0x5E780A, CPed*>
#define EV_OBJECTRENDER_EVENT     f_list_thiscall<int(__fastcall*)(CObject*), PRIORITY_BEFORE, INJECT_JUMP, 0x59F1ED, CObject*>

	namespace Events
	{
		extern EV_DRAWING_EVENT          drawingEvent;
		extern EV_DRAWHUD_EVENT          drawHudEvent;
		extern EV_DRAWRADAR_EVENT        drawRadarEvent;
		extern EV_DRAWRADARBLIPS_EVENT   drawRadarBlipsEvent;
		extern EV_DRAWMENUMAPBLIPS_EVENT drawMenuMapBlipsEvent;
		extern EV_INITRW_EVENT           initRwEvent;
		extern EV_SHUTDOWNRW_EVENT       shutdownRwEvent;
		extern EV_VEHICLECTOR_EVENT      vehicleCtorEvent;
		extern EV_VEHICLEDTOR_EVENT      vehicleDtorEvent;
		extern EV_PEDCTOR_EVENT          pedCtorEvent;
		extern EV_PEDDTOR_EVENT          pedDtorEvent;
		extern EV_OBJECTCTOR_EVENT       objectCtorEvent;
		extern EV_OBJECTDTOR_EVENT       objectDtorEvent;
		extern EV_INITPOOLS_EVENT        initPoolsEvent;
		extern EV_SHUTDOWNPOOLS_EVENT    shutdownPoolsEvent;
		extern EV_VEHICLERENDER_EVENT    vehicleRenderEvent;
		extern EV_PEDRENDER_EVENT        pedRenderEvent;
		extern EV_OBJECTRENDER_EVENT     objectRenderEvent;
	};
};