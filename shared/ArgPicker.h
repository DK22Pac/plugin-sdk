/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include <tuple>
#include <utility>

namespace plugin {

template<typename... Types>
struct ArgTypes {};

template<typename TypesList, int... Indices>
struct ArgPick;

template<typename... Types, int... Indices>
struct ArgPick<ArgTypes<Types...>, Indices...> {
    using CallbackType = std::function<void(Types...)>;
    using FnPtrType = void(*)(Types...);
    
    template<typename Tuple>
    void operator()(CallbackType fun, Tuple& t) const { fun(std::get<Indices>(t)...); }
};

struct DefaultArgs {};

template<typename... Types>
struct DefaultArgPicker {
    using CallbackType = std::function<void(Types...)>;
    using FnPtrType = void(*)(Types...);

    template<typename Tuple, size_t... Indices>
    void call_it(CallbackType const &fun, Tuple& t, std::index_sequence<Indices...>) const {
        fun(std::get<Indices>(t)...);
    }

    template<typename Tuple>
    void operator()(CallbackType fun, Tuple& t) const {
        call_it(fun, t, std::make_index_sequence<std::tuple_size<Tuple>::value>{});
    }
};

using NoArgs = ArgPick<ArgTypes<>>;

using ArgPickNone = NoArgs;

template<typename Type, size_t N>
using ArgPickN = ArgPick<ArgTypes<Type>, N>;

template<typename Type1, size_t N1, typename Type2, size_t N2>
using ArgPick2N = ArgPick<ArgTypes<Type1, Type2>, N1, N2>;

template<typename Type1, size_t N1, typename Type2, size_t N2, typename Type3, size_t N3>
using ArgPick3N = ArgPick<ArgTypes<Type1, Type2, Type3>, N1, N2, N3>;

template<typename Type1, size_t N1, typename Type2, size_t N2, typename Type3, size_t N3, typename Type4, size_t N4>
using ArgPick4N = ArgPick<ArgTypes<Type1, Type2, Type3, Type4>, N1, N2, N3, N4>;

template<typename Type1, size_t N1, typename Type2, size_t N2, typename Type3, size_t N3, typename Type4, size_t N4, typename Type5, size_t N5>
using ArgPick5N = ArgPick<ArgTypes<Type1, Type2, Type3, Type4, Type5>, N1, N2, N3, N4, N5>;

template<typename Type1, size_t N1, typename Type2, size_t N2, typename Type3, size_t N3, typename Type4, size_t N4, typename Type5, size_t N5, typename Type6, size_t N6>
using ArgPick6N = ArgPick<ArgTypes<Type1, Type2, Type3, Type4, Type5, Type6>, N1, N2, N3, N4, N5, N6>;

template<typename Type1, size_t N1, typename Type2, size_t N2, typename Type3, size_t N3, typename Type4, size_t N4, typename Type5, size_t N5, typename Type6, size_t N6, typename Type7, size_t N7>
using ArgPick7N = ArgPick<ArgTypes<Type1, Type2, Type3, Type4, Type5, Type6, Type7>, N1, N2, N3, N4, N5, N6, N7>;

template<typename Type1, size_t N1, typename Type2, size_t N2, typename Type3, size_t N3, typename Type4, size_t N4, typename Type5, size_t N5, typename Type6, size_t N6, typename Type7, size_t N7, typename Type8, size_t N8>
using ArgPick8N = ArgPick<ArgTypes<Type1, Type2, Type3, Type4, Type5, Type6, Type7, Type8>, N1, N2, N3, N4, N5, N6, N7, N8>;

template<typename Type1, size_t N1, typename Type2, size_t N2, typename Type3, size_t N3, typename Type4, size_t N4, typename Type5, size_t N5, typename Type6, size_t N6, typename Type7, size_t N7, typename Type8, size_t N8, typename Type9, size_t N9>
using ArgPick9N = ArgPick<ArgTypes<Type1, Type2, Type3, Type4, Type5, Type6, Type7, Type8, Type9>, N1, N2, N3, N4, N5, N6, N7, N8, N9>;

template<typename Type1, size_t N1, typename Type2, size_t N2, typename Type3, size_t N3, typename Type4, size_t N4, typename Type5, size_t N5, typename Type6, size_t N6, typename Type7, size_t N7, typename Type8, size_t N8, typename Type9, size_t N9, typename Type10, size_t N10>
using ArgPick10N = ArgPick<ArgTypes<Type1, Type2, Type3, Type4, Type5, Type6, Type7, Type8, Type9, Type10>, N1, N2, N3, N4, N5, N6, N7, N8, N9, N10>;

template<typename Type1, size_t N1, typename Type2, size_t N2, typename Type3, size_t N3, typename Type4, size_t N4, typename Type5, size_t N5, typename Type6, size_t N6, typename Type7, size_t N7, typename Type8, size_t N8, typename Type9, size_t N9, typename Type10, size_t N10, typename Type11, size_t N11>
using ArgPick11N = ArgPick<ArgTypes<Type1, Type2, Type3, Type4, Type5, Type6, Type7, Type8, Type9, Type10, Type11>, N1, N2, N3, N4, N5, N6, N7, N8, N9, N10, N11>;
}
