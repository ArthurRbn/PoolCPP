/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD13-arthur.robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_PICTURE_HPP
#define B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_PICTURE_HPP

#include <iostream>

class Picture {
public:
    Picture(const std::string &file = "");
    Picture(const Picture &copy);
    Picture &operator=(const Picture &copy);
    ~Picture();
    bool getPictureFromFile(const std::string &file);
    std::string data;
};

#endif //B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_PICTURE_HPP
