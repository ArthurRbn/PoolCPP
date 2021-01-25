/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD14M_arthur_robine
** File description:
** Created by arthur,
*/

#include "LittleHand.hpp"

LittleHand::LittleHand()
{
}

LittleHand::~LittleHand()
{
}

static void add_fruit(FruitNode **tmp, FruitBox &list, FruitBox &unsorted, FruitNode **unsortable)
{
    if (list.putFruit((*tmp)->content)) {
        unsorted.pickFruit();
    } else {
        if (*unsortable == nullptr)
            *unsortable = unsorted.head();
        unsorted.putFruit(unsorted.pickFruit());
    }
}

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
    FruitNode *tmp = unsorted.head();
    FruitNode *unsortable = nullptr;

    while (tmp) {
        if (tmp == unsortable)
            return;
        if (tmp && tmp->content && dynamic_cast<Lime *>(tmp->content)) {
            add_fruit(&tmp, limes, unsorted, &unsortable);
            tmp = nullptr;
        } else if (tmp && tmp->content && dynamic_cast<Banana *>(tmp->content)) {
            add_fruit(&tmp, bananas, unsorted, &unsortable);
            tmp = nullptr;
        } else if (tmp && tmp->content && dynamic_cast<Lemon *>(tmp->content)) {
            add_fruit(&tmp, lemons, unsorted, &unsortable);
            tmp = nullptr;
        } else {
            if (unsortable == nullptr)
                unsortable = unsorted.head();
            unsorted.putFruit(unsorted.pickFruit());
            tmp = unsorted.head();
        }
        if (tmp == nullptr)
            tmp = unsorted.head();
    }
}
