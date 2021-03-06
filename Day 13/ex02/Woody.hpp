/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD13_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_WOODY_HPP
#define B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_WOODY_HPP

#include "Toy.hpp"

class Woody: public Toy {
public:
    Woody(const std::string &name, const std::string &filename = "woody.txt");
    ~Woody();
};

#endif //B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_WOODY_HPP
