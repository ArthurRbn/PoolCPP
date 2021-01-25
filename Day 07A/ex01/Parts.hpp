/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD07A_arthur_robine
** File description:
** Exercice 01
*/

#ifndef B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_PARTS_HPP
#define B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_PARTS_HPP

#include <iostream>

class Arms {
public:
    Arms(std::string serial = "A-01", bool functionnal = true);
    ~Arms();
    bool isFunctionnal() const;
    std::string serial() const;
    void informations() const;
private:
    std::string _serial;
    bool _functionnal;
};

class Legs {
public:
    Legs(std::string serial = "L-01", bool functionnal = true);
    ~Legs();
    bool isFunctionnal() const;
    std::string serial() const;
    void informations() const;
private:
    std::string _serial;
    bool _functionnal;
};

class Head {
public:
    Head(std::string serial = "H-01", bool functionnal = true);
    ~Head();
    bool isFunctionnal() const;
    std::string serial() const;
    void informations() const;
private:
    std::string _serial;
    bool _functionnal;
};

#endif //B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_PARTS_HPP
