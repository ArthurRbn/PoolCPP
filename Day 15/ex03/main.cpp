/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD15_arthur_robine
** File description:
** Created by arthur,
*/

#include <iostream>
#include "ex03.hpp"

int main()
{
    int tab[] = {11, 3, 89, 42};
    foreach(tab, print<int>, 4);
    std::string tab2[] = {"j'", "aime", "les", "templates", "!"};
    foreach(tab2, print, 5);
    return 0;
}