/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

namespace plugin {

template<uintptr_t... Values>
struct RefList {
private:
    template<uintptr_t... FilterValues>
    struct FilterList {};

    template<bool, uintptr_t...>
    struct CompareFn;

    template<bool CompareType, uintptr_t V>
    struct CompareFn<CompareType, V> {
        constexpr static bool value = !CompareType;
    };

    template<bool CompareType, uintptr_t V, uintptr_t A, uintptr_t... Ary>
    struct CompareFn<CompareType, V, A, Ary...> {
        constexpr static bool value = (V == A) ? CompareType : CompareFn<CompareType, V, Ary...>::value;
    };

    template <uintptr_t FilterCmpIndex, bool FilterType, typename RL, typename FV, uintptr_t...>
    struct filter_iterator;

    template <uintptr_t FilterCmpIndex, bool FilterType, uintptr_t... acceptedValues, uintptr_t... filters>
    struct filter_iterator<FilterCmpIndex, FilterType, RefList<acceptedValues...>, FilterList<filters...>> {
        using type = RefList<acceptedValues...>;
    };

    template <uintptr_t FilterCmpIndex, bool FilterType, uintptr_t... acceptedValues, uintptr_t... filters, uintptr_t RefAddr, uintptr_t GameVersion, uintptr_t RefType, uintptr_t RefObjectId, uintptr_t RefIndexInObject, uintptr_t... values>
    struct filter_iterator<FilterCmpIndex, FilterType, RefList<acceptedValues...>, FilterList<filters...>, RefAddr, GameVersion, RefType, RefObjectId, RefIndexInObject, values...> {
        static constexpr uintptr_t compValue[4] = { GameVersion, RefType, RefObjectId, RefIndexInObject };

        using type = typename filter_iterator<FilterCmpIndex, FilterType,
            std::conditional_t<CompareFn<FilterType, compValue[FilterCmpIndex], filters...>::value,
                RefList<acceptedValues..., RefAddr, GameVersion, RefType, RefObjectId, RefIndexInObject>,
                RefList<acceptedValues...>>,
            FilterList<filters...>, values...>::type;
    };

    template <uintptr_t FilterCmpIndex, bool FilterType, uintptr_t... filters>
    struct filter : filter_iterator<FilterCmpIndex, FilterType, RefList<>, FilterList<filters...>, Values...> {};
public:
    template <uintptr_t... filters>
    using only_from = typename filter<2, true, filters...>::type;

    template <uintptr_t... filters>
    using only_gameversion = typename filter<0, true, filters...>::type;

    template <uintptr_t... filters>
    using only_reftype = typename filter<1, true, filters...>::type;

    template <uintptr_t... filters>
    using only_index = typename filter<3, true, filters...>::type;

    template <uintptr_t... filters>
    using except_from = typename filter<2, false, filters...>::type;

    template <uintptr_t... filters>
    using except_gameversion = typename filter<0, false, filters...>::type;

    template <uintptr_t... filters>
    using except_reftype = typename filter<1, false, filters...>::type;

    template <uintptr_t... filters>
    using except_index = typename filter<3, false, filters...>::type;

    using only_first = only_index<1>;

    using only_second = only_index<2>;

    using only_third = only_index<3>;

    using except_first = except_index<1>;

    using except_second = except_index<2>;

    using except_third = except_index<3>;
};

template<typename Refs, uintptr_t... Values>
struct MakeRefListFromAddressList;

template<uintptr_t... RefValues>
struct MakeRefListFromAddressList<RefList<RefValues...>> {
    using type = RefList<RefValues...>;
};

#ifdef GTASA
template<uintptr_t... RefValues, uintptr_t Addr, uintptr_t HookType, uintptr_t... Values>
struct MakeRefListFromAddressList<RefList<RefValues...>, Addr, HookType, Values...> {
    using type = typename MakeRefListFromAddressList<RefList<RefValues..., Addr, 1001, HookType, 0, 0,
                                                                           Addr, 1002, HookType, 0, 0>, Values...>::type;
};
#elif GTA2
template<uintptr_t... RefValues, uintptr_t Addr, uintptr_t HookType, uintptr_t... Values>
struct MakeRefListFromAddressList<RefList<RefValues...>, Addr, HookType, Values...> {
    using type = typename MakeRefListFromAddressList<RefList<RefValues..., Addr, 9600, HookType, 0, 0>, Values...>::type;
};
#elif GTAIV
template<uintptr_t... RefValues, uintptr_t Addr, uintptr_t HookType, uintptr_t... Values>
struct MakeRefListFromAddressList<RefList<RefValues...>, Addr, HookType, Values...> {
    using type = typename MakeRefListFromAddressList<RefList<RefValues..., Addr, 'CE', HookType, 0, 0>, Values...>::type;
};
#elif defined(GTASA_UNREAL) || defined(GTAVC_UNREAL) || defined(GTA3_UNREAL)
template<uintptr_t... RefValues, uintptr_t Addr, uintptr_t HookType, uintptr_t... Values>
struct MakeRefListFromAddressList<RefList<RefValues...>, Addr, HookType, Values...> {
    using type = typename MakeRefListFromAddressList<RefList<RefValues..., Addr, 'UE', HookType, 0, 0>, Values...>::type;
};
#else
template<uintptr_t... RefValues, uintptr_t Addr, uintptr_t HookType, uintptr_t... Values>
struct MakeRefListFromAddressList<RefList<RefValues...>, Addr, HookType, Values...> {
    using type = typename MakeRefListFromAddressList<RefList<RefValues..., Addr, 100, HookType, 0, 0>, Values...>::type;
};
#endif

template<uintptr_t... Values>
using AddressList = typename MakeRefListFromAddressList<RefList<>, Values...>::type;

template<typename Refs, uintptr_t... Values>
struct MakeRefListFromAddressListMulti;

template<uintptr_t... RefValues>
struct MakeRefListFromAddressListMulti<RefList<RefValues...>> {
    using type = RefList<RefValues...>;
};

template<uintptr_t... RefValues, uintptr_t Addr, uintptr_t GameVersion, uintptr_t HookType, uintptr_t... Values>
struct MakeRefListFromAddressListMulti<RefList<RefValues...>, Addr, GameVersion, HookType, Values...> {
    using type = typename MakeRefListFromAddressListMulti<RefList<RefValues..., Addr, GameVersion, HookType, 0, 0>, Values...>::type;
};

template<uintptr_t... Values>
using AddressListMulti = typename MakeRefListFromAddressListMulti<RefList<>, Values...>::type;

}
