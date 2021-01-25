/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-arthur.robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX00_HPP
#define B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX00_HPP

template<typename type>
void swap(type &A, type &B)
{
    type C = A;

    A = B;
    B = C;
}

template<typename type2>
type2 min(type2 A, type2 B)
{
    if (A > B)
        return B;
    else if (A < B)
        return A;
    else
        return B;
}

template<typename type3>
type3 max(type3 A, type3 B)
{
    if (A > B)
        return A;
    else
        return B;
}

template<typename type4>
type4 add(type4 A, type4 B)
{
    return (A + B);
}

#endif //B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX00_HPP
