/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD14M_arthur_robine
** File description:
** Created by arthur,
*/

#include "Coconut.hpp"

Coconut::Coconut(): Fruit(15, "coconut")
{
}

Coconut::~Coconut()
{
}

std::string Coconut::getName() const
{
    return _name;
}