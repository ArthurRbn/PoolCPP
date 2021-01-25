/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD14M_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_LITTLEHAND_HPP
#define B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_LITTLEHAND_HPP

#include "FruitBox.hpp"
#include "Coconut.hpp"
#include "Lime.hpp"
#include "Banana.hpp"
#include "Lemon.hpp"

class LittleHand {
public:
    LittleHand();
    ~LittleHand();
    static void sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes);
    static FruitBox *const *organizeCoconut(Coconut const *const *coconuts);
};

#endif //B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_LITTLEHAND_HPP
