rem Create output directories
if not exist "output/mingw/obj/paths/Debug" md "output/mingw/obj/paths/Debug"
if not exist "output/mingw/obj/paths/Release" md "output/mingw/obj/paths/Release"
if not exist "output/mingw/lib/paths/Debug" md "output/mingw/lib/paths/Debug"
if not exist "output/mingw/lib/paths/Release" md "output/mingw/lib/paths/Release"
if not exist "output/mingw/obj/plugin_vc/Debug" md "output/mingw/obj/plugin_vc/Debug"
if not exist "output/mingw/lib/plugin_vc/Debug" md "output/mingw/lib/plugin_vc/Debug"
if not exist "output/mingw/obj/plugin_vc/Release" md "output/mingw/obj/plugin_vc/Release"
if not exist "output/mingw/lib/plugin_vc/Release" md "output/mingw/lib/plugin_vc/Release"
if not exist "output/mingw/obj/plugin_iii/Debug" md "output/mingw/obj/plugin_iii/Debug"
if not exist "output/mingw/lib/plugin_iii/Debug" md "output/mingw/lib/plugin_iii/Debug"
if not exist "output/mingw/obj/plugin_iii/Release" md "output/mingw/obj/plugin_iii/Release"
if not exist "output/mingw/lib/plugin_iii/Release" md "output/mingw/lib/plugin_iii/Release"
if not exist "output/mingw/obj/plugin/Debug" md "output/mingw/obj/plugin/Debug"
if not exist "output/mingw/lib/plugin/Debug" md "output/mingw/lib/plugin/Debug"
if not exist "output/mingw/obj/plugin/Release" md "output/mingw/obj/plugin/Release"
if not exist "output/mingw/lib/plugin/Release" md "output/mingw/lib/plugin/Release"
rem Build libpaths
g++ -std=c++14 -c "shared/paths/Paths.cpp" -o "output/mingw/obj/paths/Release/Paths.o" -m32
ar rcs "output/mingw/lib/libpaths.a" "output/mingw/obj/paths/Release/Paths.o"
rem build libplugin_vc
cd "output/mingw/obj/plugin_vc/Release"
g++ -std=c++14 -c "../../../../../plugin_vc/events/*.cpp" -I "../../../../../plugin_vc" -m32
g++ -std=c++14 -c "../../../../../plugin_vc/extensions/*.cpp" -I "../../../../../plugin_vc" -m32
g++ -std=c++14 -c "../../../../../plugin_vc/game_vc/*.cpp" -I "../../../../../plugin_vc" -m32
g++ -std=c++14 -c "../../../../../plugin_vc/plbase/*.cpp" -I "../../../../../plugin_vc" -m32
cd "../../../../../"
ar rcs "output/mingw/lib/libplugin_vc.a" "output/mingw/obj/plugin_vc/Release/*.o"
rem build libplugin_iii
cd "output/mingw/obj/plugin_iii/Release"
g++ -std=c++14 -c "../../../../../plugin_iii/events/*.cpp" -I "../../../../../plugin_iii" -m32
g++ -std=c++14 -c "../../../../../plugin_iii/extensions/*.cpp" -I "../../../../../plugin_iii" -m32
g++ -std=c++14 -c "../../../../../plugin_iii/game_iii/*.cpp" -I "../../../../../plugin_iii" -m32
g++ -std=c++14 -c "../../../../../plugin_iii/plbase/*.cpp" -I "../../../../../plugin_iii" -m32
cd "../../../../../"
ar rcs "output/mingw/lib/libplugin_iii.a" "output/mingw/obj/plugin_iii/Release/*.o"
rem build libplugin (sa)
cd "output/mingw/obj/plugin/Release"
g++ -std=c++14 -c "../../../../../plugin/events/*.cpp" -I "../../../../../plugin" -m32
g++ -std=c++14 -c "../../../../../plugin/extensions/*.cpp" -I "../../../../../plugin" -m32
g++ -std=c++14 -c "../../../../../plugin/game_sa/*.cpp" -I "../../../../../plugin" -m32
g++ -std=c++14 -c "../../../../../plugin/plbase/*.cpp" -I "../../../../../plugin" -m32
cd "../../../../../"
ar rcs "output/mingw/lib/libplugin.a" "output/mingw/obj/plugin/Release/*.o"
pause