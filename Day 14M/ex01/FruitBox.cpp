/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD14M_arthur_robine
** File description:
** Created by arthur,
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size)
{
    _size = size;
    _list = nullptr;
}

FruitBox::~FruitBox()
{
    FruitNode *tmp = nullptr;

    while (_list) {
        tmp = _list;
        _list = _list->next;
        delete tmp;
    }
}

int FruitBox::nbFruits() const
{
    FruitNode *tmp = _list;
    int size = 0;

    while (tmp != nullptr) {
        tmp = tmp->next;
        ++size;
    }
    return size;
}

bool FruitBox::putFruit(Fruit *newFruit)
{
    FruitNode *tmp = _list;

    if (this->nbFruits() >= _size) {
        return false;
    }
    while (tmp && tmp->next) {
        if (tmp->content == newFruit)
            return false;
        tmp = tmp->next;
    }
    auto *new_node = new FruitNode;
    new_node->content = newFruit;
    new_node->next = nullptr;
    if (!_list) {
        _list = new_node;
        return true;
    }
    tmp->next = new_node;
    return true;
}

Fruit *FruitBox::pickFruit()
{
    Fruit *fruit = nullptr;
    FruitNode *tmp = nullptr;

    if (!_list) {
        return fruit;
    }
    fruit = _list->content;
    _list->content = nullptr;
    tmp = _list;
    _list = tmp->next;
    delete tmp;
    return fruit;
}

FruitNode *FruitBox::head() const
{
    return _list;
}