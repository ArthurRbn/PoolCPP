/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD15_arthur_robine
** File description:
** Created by arthur,
*/

#include <iostream>
#include "ex02.hpp"

int main()
{
    int tab[2] = {3, 0};
    int minimum = templateMin(tab, 2);
    std::cout << "templateMin(tab , 2) = " << minimum << std::endl;
    minimum = nonTemplateMin(tab, 2);
    std::cout << "nonTemplateMin(tab , 2) = " << minimum << std::endl;
}