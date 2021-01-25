/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD07A_arthur_robine
** File description:
** Exercice 01
*/

#ifndef B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_KOALABOT_HPP
#define B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_KOALABOT_HPP

#include <iostream>
#include "Parts.hpp"

class KoalaBot {
public:
    KoalaBot(std::string serial = "Bob-01");
    ~KoalaBot();
    void setParts(Arms const &arms);
    void setParts(Legs const &legs);
    void setParts(Head const &head);
    void swapParts(Arms& arms);
    void swapParts(Legs& legs);
    void swapParts(Head& head);
    void informations() const;
    bool status() const;
private:
    Arms _arms;
    Legs _legs;
    Head _head;
    std::string _serial;
};

#endif //B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_KOALABOT_HPP
