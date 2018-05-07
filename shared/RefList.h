/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

namespace plugin {

template<int... Values>
struct RefList {
private:
    template<int... FilterValues>
    struct FilterList {};

    template<bool, int...>
    struct CompareFn;

    template<bool CompareType, int V>
    struct CompareFn<CompareType, V> {
        constexpr static bool value = !CompareType;
    };

    template<bool CompareType, int V, int A, int... Ary>
    struct CompareFn<CompareType, V, A, Ary...> {
        constexpr static bool value = (V == A) ? CompareType : CompareFn<CompareType, V, Ary...>::value;
    };

    template <int FilterCmpIndex, bool FilterType, typename RL, typename FV, int...>
    struct filter_iterator;

    template <int FilterCmpIndex, bool FilterType, int... acceptedValues, int... filters>
    struct filter_iterator<FilterCmpIndex, FilterType, RefList<acceptedValues...>, FilterList<filters...>> {
        using type = RefList<acceptedValues...>;
    };

    template <int FilterCmpIndex, bool FilterType, int... acceptedValues, int... filters, int RefAddr, int GameVersion, int RefType, int RefObjectId, int RefIndexInObject, int... values>
    struct filter_iterator<FilterCmpIndex, FilterType, RefList<acceptedValues...>, FilterList<filters...>, RefAddr, GameVersion, RefType, RefObjectId, RefIndexInObject, values...> {
        static constexpr int compValue[4] = { GameVersion, RefType, RefObjectId, RefIndexInObject };

        using type = typename filter_iterator<FilterCmpIndex, FilterType,
            std::conditional_t<CompareFn<FilterType, compValue[FilterCmpIndex], filters...>::value,
                RefList<acceptedValues..., RefAddr, GameVersion, RefType, RefObjectId, RefIndexInObject>,
                RefList<acceptedValues...>>,
            FilterList<filters...>, values...>::type;
    };

    template <int FilterCmpIndex, bool FilterType, int... filters>
    struct filter : filter_iterator<FilterCmpIndex, FilterType, RefList<>, FilterList<filters...>, Values...> {};
public:
    template <int... filters>
    using only_from = typename filter<2, true, filters...>::type;

    template <int... filters>
    using only_gameversion = typename filter<0, true, filters...>::type;

    template <int... filters>
    using only_reftype = typename filter<1, true, filters...>::type;

    template <int... filters>
    using only_index = typename filter<3, true, filters...>::type;

    template <int... filters>
    using except_from = typename filter<2, false, filters...>::type;

    template <int... filters>
    using except_gameversion = typename filter<0, false, filters...>::type;

    template <int... filters>
    using except_reftype = typename filter<1, false, filters...>::type;

    template <int... filters>
    using except_index = typename filter<3, false, filters...>::type;

    using only_first = only_index<1>;

    using only_second = only_index<2>;

    using only_third = only_index<3>;

    using except_first = except_index<1>;

    using except_second = except_index<2>;

    using except_third = except_index<3>;
};

template<typename Refs, int... Values>
struct MakeRefListFromAddressList;

template<int... RefValues>
struct MakeRefListFromAddressList<RefList<RefValues...>> {
    using type = RefList<RefValues...>;
};

#ifdef GTASA
template<int... RefValues, int Addr, int HookType, int... Values>
struct MakeRefListFromAddressList<RefList<RefValues...>, Addr, HookType, Values...> {
    using type = typename MakeRefListFromAddressList<RefList<RefValues..., Addr, 1001, HookType, 0, 0,
                                                                           Addr, 1002, HookType, 0, 0>, Values...>::type;
};
#else
template<int... RefValues, int Addr, int HookType, int... Values>
struct MakeRefListFromAddressList<RefList<RefValues...>, Addr, HookType, Values...> {
    using type = typename MakeRefListFromAddressList<RefList<RefValues..., Addr, 100, HookType, 0, 0>, Values...>::type;
};
#endif

template<int... Values>
using AddressList = typename MakeRefListFromAddressList<RefList<>, Values...>::type;

template<typename Refs, int... Values>
struct MakeRefListFromAddressListMulti;

template<int... RefValues>
struct MakeRefListFromAddressListMulti<RefList<RefValues...>> {
    using type = RefList<RefValues...>;
};

template<int... RefValues, int Addr, int GameVersion, int HookType, int... Values>
struct MakeRefListFromAddressListMulti<RefList<RefValues...>, Addr, GameVersion, HookType, Values...> {
    using type = typename MakeRefListFromAddressListMulti<RefList<RefValues..., Addr, GameVersion, HookType, 0, 0>, Values...>::type;
};

template<int... Values>
using AddressListMulti = typename MakeRefListFromAddressListMulti<RefList<>, Values...>::type;

}
