/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD14M_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_FRUITNODE_HPP
#define B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_FRUITNODE_HPP

#include "Fruit.hpp"

typedef struct FruitNode_s {
    Fruit *content;
    struct FruitNode_s *next;
} FruitNode;
#endif //B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_FRUITNODE_HPP
