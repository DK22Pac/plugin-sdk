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

}
