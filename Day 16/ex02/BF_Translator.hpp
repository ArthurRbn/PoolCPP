/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD16_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_BF_TRANSLATOR_HPP
#define B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_BF_TRANSLATOR_HPP

#include <string>
#include <map>

class BF_Translator {
public:
    BF_Translator();
    ~BF_Translator();
    int translate(const std::string &in, const std::string &out);
private:
    std::map<char, std::string> _actions;
};

#endif //B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_BF_TRANSLATOR_HPP
