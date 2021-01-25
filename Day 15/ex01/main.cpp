/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD15_arthur_robine
** File description:
** Created by arthur,
*/

#include <iostream>
#include "main.hpp"
#include "ex01.hpp"

int main()
{
    std::cout << compare(1, 2) << std::endl;
    std::cout << compare<const char*>("chaineZ", "chaineA42") << std::endl;
    const char *s1 = "42", *s2 = "lulz";
    std::cout << compare(s1, s2) << std::endl;
}