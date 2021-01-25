/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD15_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX03_HPP
#define B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX03_HPP

template<typename P>
void print(P &elem)
{
    std::cout << elem << std::endl;
}

template<typename T>
void foreach(T* array, void func(T &elem), size_t size)
{
    for (size_t i = 0; i < size; ++i)
        func(array[i]);
}

#endif //B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX03_HPP
