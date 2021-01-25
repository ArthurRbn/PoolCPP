/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD15_arthur_robine
** File description:
** Created by arthur,
*/

#include <iostream>
#include "ex06.hpp"

int main()
{
    Tuple<int, std::string> t;
    t.a = 42;
    t.b = std::string("Karadoc toasted sandwich");
    std::cout << t.toString() << std::endl;
    Tuple<float, char> z;
    z.a = 1.1f;
    z.b = 'x';
    std::cout << z.toString() << std::endl;
    Tuple<std::string, int> x;
    x.a = "la drug";
    x.b = 15;
    std::cout << x.toString() << std::endl;
    return 0;
}