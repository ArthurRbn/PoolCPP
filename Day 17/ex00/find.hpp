/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD17-arthur.robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD17_ARTHUR_ROBINE_FIND_HPP
#define B_CPP_300_STG_3_1_CPPD17_ARTHUR_ROBINE_FIND_HPP

#include <algorithm>

template<typename T>
typename T::iterator do_find(T &findIn, int toFind)
{
    return std::find(findIn.begin(), findIn.end(), toFind);
}

#endif //B_CPP_300_STG_3_1_CPPD17_ARTHUR_ROBINE_FIND_HPP
