/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD15_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX02_HPP
#define B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX02_HPP

#include <string>

template<typename T>
T min(T a, T b)
{
    std::cout << "template min" << std::endl;
    if (b < a)
        return b;
    else
        return a;
}

int min(const int a, const int b)
{
    std::cout << "non-template min" << std::endl;
    if (b < a)
        return b;
    else
        return a;
}

template<typename T2>
T2 templateMin(const T2 *a, const size_t size)
{
    T2 minVal = a[0];

    for (size_t i = 0; i < size - 1; ++i)
        minVal = min<T2>(minVal, a[i + 1]);
    return minVal;
}

int nonTemplateMin(const int *a, const int size)
{
    int minVal = a[0];

    for (int i = 0; i < size - 1; ++i)
        minVal = min(minVal, a[i + 1]);
    return minVal;
}

#endif //B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX02_HPP
