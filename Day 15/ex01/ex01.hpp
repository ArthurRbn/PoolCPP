/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD15_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX01_HPP
#define B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX01_HPP

template<typename T>
int compare(const T &a, const T &b)
{
    if (a == b)
        return 0;
    else if (a < b)
        return -1;
    else
        return 1;
}

int compare(const char * &a, const char * &b)
{
    if (a == b)
        return 0;
    else if (a < b)
        return -1;
    else
        return 1;
}

#endif //B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX01_HPP