/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD14M_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_FRUITBOX_HPP
#define B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_FRUITBOX_HPP

#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox {
public:
    FruitBox(int size);
    ~FruitBox();
    int nbFruits() const;
    bool putFruit(Fruit *newFruit);
    Fruit *pickFruit();
    FruitNode *head() const;
private:
    int _size;
    FruitNode *_list;
};

#endif //B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_FRUITBOX_HPP
