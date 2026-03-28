/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum ePriceSection : int32_t {
    PRICE_SECTION_NONE = 0,
    PRICE_SECTION_CAR_MODS = 1,
    PRICE_SECTION_CAR_PAINTJOBS = 2,
    PRICE_SECTION_FURNITURE = 3,
    PRICE_SECTION_CLOTHES = 4,
    PRICE_SECTION_HAIRCUTS = 5,
    PRICE_SECTION_TATTOOS = 6,
    PRICE_SECTION_GIFTS = 7,
    PRICE_SECTION_FOOD = 8,
    PRICE_SECTION_WEAPONS = 9,
    PRICE_SECTION_PROPERTY = 10
};

class CShopping {
    struct PriceModifier {
        uint32_t key;
        uint32_t price;
    };
    VALIDATE_SIZE(PriceModifier, 0x8);

    struct ItemPrice {
        uint32_t key;
        uint32_t price;

        union {
            struct {
                uint32_t ammo;
            } weapon;
            struct {
                uint32_t modelKey;
                uint32_t type; // a/k/a textureKey
            } clothes;
            struct {
                uint32_t type1;
                uint32_t texKey;
            } tattoos;
            struct {
                int32_t extra1;
                int32_t extra2;
            } general;
        };

        char nameTag[8];
    };
    VALIDATE_SIZE(ItemPrice, 0x18);

    struct StatModifiers {
        struct {
            int8_t statIndex;
            int8_t change;
        } modifiers[2];
    };
    VALIDATE_SIZE(StatModifiers, 0x4);

    static void Load();
    static void Save();
};