/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD14M_arthur_robine
** File description:
** Created by arthur,
*/

#include "Lemon.hpp"

Lemon::Lemon(): Fruit(3, "lemon")
{
}

Lemon::~Lemon()
{
}

std::string Lemon::getName() const
{
    return _name;
}
