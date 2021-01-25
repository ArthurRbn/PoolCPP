/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD13_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_BUZZ_HPP
#define B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_BUZZ_HPP

#include "Toy.hpp"

class Buzz: public Toy {
public:
    Buzz(const std::string &name, const std::string &filename = "buzz.txt");
    ~Buzz();
};

#endif //B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_BUZZ_HPP
