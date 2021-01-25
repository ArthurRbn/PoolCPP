/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD15_arthur_robine
** File description:
** Created by arthur,
*/

#include <iostream>
#include "ex05.hpp"

int float_to_int(float const &f)
{
    return static_cast <int >(f);
}

int main()
{
    array<int> a(4);
    a[3] = 1;
    const auto b = a;
    b.dump();
    array<float> c;
    c.dump();
    c[2] = 1.1;
    c.dump();
    a = c.convertTo<int>(&float_to_int);
    a.dump();

    array<bool> lol(5);
    lol[0] = true;
    lol[1] = false;
    lol[2] = true;
    lol[3] = true;
    lol[4] = false;
    lol.dump();
}