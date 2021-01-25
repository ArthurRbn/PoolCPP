/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD13_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_TOYSTORY_HPP
#define B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_TOYSTORY_HPP

#include <iostream>
#include "Toy.hpp"

class ToyStory {
public:
    ToyStory();
    ~ToyStory();
    static void tellMeAStory(const std::string &filename, Toy &toy1, bool (Toy::*func1)(const std::string&), Toy &toy2, bool (Toy::*func2)(const std::string&));
};

#endif //B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_TOYSTORY_HPP
