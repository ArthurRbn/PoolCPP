/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD14M_arthur_robine
** File description:
** Created by arthur,
*/

#include "Banana.hpp"

Banana::Banana(): Fruit(5, "banana")
{
}

Banana::~Banana()
{
}

std::string Banana::getName() const
{
    return _name;
}
