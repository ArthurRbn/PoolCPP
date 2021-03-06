/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD14M_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_COCONUT_HPP
#define B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_COCONUT_HPP

#include "Fruit.hpp"

class Coconut: public Fruit {
public:
    Coconut();
    ~Coconut();
    virtual std::string getName() const;
};

#endif //B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_COCONUT_HPP
