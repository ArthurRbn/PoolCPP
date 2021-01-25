/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPrush2_nicolas_schneider
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_XMLGIFT_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_XMLGIFT_HPP

#include <iostream>

class xmlGift {
public:
    xmlGift(const std::string &type, const std::string &title);
    ~xmlGift();
    void createXML();
private:
    std::string _type;
    std::string _title;
};

#endif //B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_XMLGIFT_HPP
