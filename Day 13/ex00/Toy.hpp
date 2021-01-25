/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD13_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_TOY_HPP
#define B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_TOY_HPP

#include <iostream>
#include "Picture.hpp"

class Toy {
public:
    enum ToyType {
        BASIC_TOY = 0,
        ALIEN
    };
    Toy();
    Toy(ToyType type, const std::string &name, const std::string &filename);
    ~Toy();
    ToyType getType() const;
    const std::string &getName() const;
    void setName(const std::string &name);
    bool setAscii(const std::string &filename);
    std::string getAscii() const;
private:
    ToyType _type;
    std::string _name;
    Picture _picture;
};

#endif //B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_TOY_HPP
