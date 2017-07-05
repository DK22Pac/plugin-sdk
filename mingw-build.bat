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
if not exist "output/mingw/obj/plugin_sa/Debug" md "output/mingw/obj/plugin_sa/Debug"
if not exist "output/mingw/lib/plugin_sa/Debug" md "output/mingw/lib/plugin_sa/Debug"
if not exist "output/mingw/obj/plugin_sa/Release" md "output/mingw/obj/plugin_sa/Release"
if not exist "output/mingw/lib/plugin_sa/Release" md "output/mingw/lib/plugin_sa/Release"
rem Build paths.lib
g++ -std=c++14 -c "shared/paths/Paths.cpp" -o "output/mingw/obj/paths/Release/Paths.o" -m32
ar rcs "output/mingw/lib/paths/Release/paths.lib" "output/mingw/obj/paths/Release/Paths.o"
rem build plugin_vc
cd "output/mingw/obj/plugin_vc/Release"
g++ -std=c++14 -c "../../../../../plugin_vc/events/*.cpp" -I "../../../../../plugin_vc" -m32
g++ -std=c++14 -c "../../../../../plugin_vc/extensions/*.cpp" -I "../../../../../plugin_vc" -m32
g++ -std=c++14 -c "../../../../../plugin_vc/game_vc/*.cpp" -I "../../../../../plugin_vc" -m32
g++ -std=c++14 -c "../../../../../plugin_vc/plbase/*.cpp" -I "../../../../../plugin_vc" -m32
cd "../../../../../"
ar rcs "output/mingw/lib/plugin_vc/Release/plugin_vc.lib" "output/mingw/obj/plugin_vc/Release/*.o"
rem build plugin_iii
cd "output/mingw/obj/plugin_iii/Release"
g++ -std=c++14 -c "../../../../../plugin_iii/events/*.cpp" -I "../../../../../plugin_iii" -m32
g++ -std=c++14 -c "../../../../../plugin_iii/extensions/*.cpp" -I "../../../../../plugin_iii" -m32
g++ -std=c++14 -c "../../../../../plugin_iii/game_iii/*.cpp" -I "../../../../../plugin_iii" -m32
g++ -std=c++14 -c "../../../../../plugin_iii/plbase/*.cpp" -I "../../../../../plugin_iii" -m32
cd "../../../../../"
ar rcs "output/mingw/lib/plugin_iii/Release/plugin_iii.lib" "output/mingw/obj/plugin_iii/Release/*.o"
rem build plugin_sa
cd "output/mingw/obj/plugin_sa/Release"
g++ -std=c++14 -c "../../../../../plugin_sa/events/*.cpp" -I "../../../../../plugin_sa" -m32
g++ -std=c++14 -c "../../../../../plugin_sa/extensions/*.cpp" -I "../../../../../plugin_sa" -m32
g++ -std=c++14 -c "../../../../../plugin_sa/game_sa/*.cpp" -I "../../../../../plugin_sa" -m32
g++ -std=c++14 -c "../../../../../plugin_sa/plbase/*.cpp" -I "../../../../../plugin_sa" -m32
cd "../../../../../"
ar rcs "output/mingw/lib/plugin_sa/Release/plugin_sa.lib" "output/mingw/obj/plugin_sa/Release/*.o"
pause