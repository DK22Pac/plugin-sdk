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
    template<int... Values>
    struct FilterList {};

    template <int FilterCmpIndex, bool FilterType, typename RL, int...>
    struct filter_interface;

    template <int FilterCmpIndex, bool FilterType, typename RL, typename FV, int...>
    struct filter_base;

    template<bool CompareType, int ArySize>
    constexpr static bool CompareFn(const int(&ary)[ArySize], int value) {
        for (size_t i = 0; i < ArySize; i++) {
            if (ary[i] == value)
                return CompareType;
        }
        return !CompareType;
    }

    template <int FilterCmpIndex, bool FilterType, int... filters>
    struct filter_base<FilterCmpIndex, FilterType, RefList<>, FilterList<filters...>> {
        using type = RefList<>;
    };

    template <int FilterCmpIndex, bool FilterType, int... acceptedValues, int... filters, int RefAddr, int GameVersion, int RefType, int RefObjectId, int RefIndexInObject>
    struct filter_base<FilterCmpIndex, FilterType, RefList<acceptedValues...>, FilterList<filters...>, RefAddr, GameVersion, RefType, RefObjectId, RefIndexInObject> {
        static constexpr int filterAry[sizeof...(filters)] = { filters... };
        static constexpr int compValue[4] = { GameVersion, RefType, RefObjectId, RefIndexInObject };

        using type = std::conditional_t<CompareFn<FilterType, sizeof...(filters)>(filterAry, compValue[FilterCmpIndex]),
            RefList<acceptedValues..., RefAddr, GameVersion, RefType, RefObjectId, RefIndexInObject>,
            RefList<acceptedValues...>>;
    };

    template <int FilterCmpIndex, bool FilterType, int... acceptedValues, int... filters, int RefAddr, int GameVersion, int RefType, int RefObjectId, int RefIndexInObject, int... values>
    struct filter_base<FilterCmpIndex, FilterType, RefList<acceptedValues...>, FilterList<filters...>, RefAddr, GameVersion, RefType, RefObjectId, RefIndexInObject, values...> {
        static constexpr int filterAry[sizeof...(filters)] = { filters... };
        static constexpr int compValue[4] = { GameVersion, RefType, RefObjectId, RefIndexInObject };

        using type = typename filter_base<FilterCmpIndex, FilterType,
            std::conditional_t<CompareFn<FilterType, sizeof...(filters)>(filterAry, compValue[FilterCmpIndex]),
            RefList<acceptedValues..., RefAddr, GameVersion, RefType, RefObjectId, RefIndexInObject>,
            RefList<acceptedValues...>>,
            FilterList<filters...>, values...>::type;
    };

    template <int FilterCmpIndex, bool FilterType, int... values, int... filters>
    struct filter_interface<FilterCmpIndex, FilterType, RefList<values...>, filters...> :
        public filter_base<FilterCmpIndex, FilterType, RefList<>, FilterList<filters...>, values...> {};
public:
    template <int... filters>
    using only_from = typename filter_interface<2, true, RefList<Values...>, filters...>::type;

    template <int... filters>
    using only_gameversion = typename filter_interface<0, true, RefList<Values...>, filters...>::type;

    template <int... filters>
    using only_reftype = typename filter_interface<1, true, RefList<Values...>, filters...>::type;

    template <int... filters>
    using only_index = typename filter_interface<3, true, RefList<Values...>, filters...>::type;

    template <int... filters>
    using except_from = typename filter_interface<2, false, RefList<Values...>, filters...>::type;

    template <int... filters>
    using except_gameversion = typename filter_interface<0, false, RefList<Values...>, filters...>::type;

    template <int... filters>
    using except_reftype = typename filter_interface<1, false, RefList<Values...>, filters...>::type;

    template <int... filters>
    using except_index = typename filter_interface<3, false, RefList<Values...>, filters...>::type;

    using only_first = typename filter_interface<3, true, RefList<Values...>, 1>::type;
    
    using only_second = only_index<2>;
    
    using only_third = only_index<3>;

    using except_first = except_index<1>;
    
    using except_second = except_index<2>;
    
    using except_third = except_index<3>;
};

template<typename Refs, int... Values>
struct MakeRefListFromAddressList;

template<int... RefValues, int Addr, int HookType>
struct MakeRefListFromAddressList<RefList<RefValues...>, Addr, HookType> {
    using type = RefList<RefValues..., Addr, 100, HookType, 0, 0>;
};

template<int... RefValues, int Addr, int HookType, int... Values>
struct MakeRefListFromAddressList<RefList<RefValues...>, Addr, HookType, Values...> {
    using type = typename MakeRefListFromAddressList<RefList<RefValues..., Addr, 100, HookType, 0, 0>, Values...>::type;
};

template<int... Values>
using AddressList = typename MakeRefListFromAddressList<RefList<>, Values...>::type;

template<typename Refs, int... Values>
struct MakeRefListFromAddressListMulti;

template<int... RefValues, int Addr, int GameVersion, int HookType>
struct MakeRefListFromAddressListMulti<RefList<RefValues...>, Addr, GameVersion, HookType> {
    using type = RefList<RefValues..., Addr, GameVersion, HookType, 0, 0>;
};

template<int... RefValues, int Addr, int GameVersion, int HookType, int... Values>
struct MakeRefListFromAddressListMulti<RefList<RefValues...>, Addr, GameVersion, HookType, Values...> {
    using type = typename MakeRefListFromAddressListMulti<RefList<RefValues..., Addr, GameVersion, HookType, 0, 0>, Values...>::type;
};

template<int... Values>
using AddressListMulti = typename MakeRefListFromAddressListMulti<RefList<>, Values...>::type;

}
