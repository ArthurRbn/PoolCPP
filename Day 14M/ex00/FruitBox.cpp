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
    int size = 0;

    FruitNode *tmp = _list;
    while (tmp) {
        tmp = tmp->next;
        ++size;
    }
    return size;
}

bool FruitBox::putFruit(Fruit *newFruit)
{
    auto *new_node = new FruitNode;
    FruitNode *tmp = _list;

    if (this->nbFruits() >= _size) {
        delete new_node;
        return false;
    }
    while (tmp && tmp->next) {
        if (tmp->content == newFruit) {
            delete new_node;
            return false;
        }
        tmp = tmp->next;
    }
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
    _list = _list->next;
    delete tmp;
    return fruit;
}

FruitNode *FruitBox::head() const
{
    return _list;
}