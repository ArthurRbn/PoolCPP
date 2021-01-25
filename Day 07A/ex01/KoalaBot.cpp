/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD07A_arthur_robine
** File description:
** Exercice 01
*/

#include "KoalaBot.hpp"

KoalaBot::KoalaBot(std::string serial)
{
    this->_serial = serial;
}

KoalaBot::~KoalaBot()
{
}

void KoalaBot::setParts(Arms const &arms)
{
    this->_arms = arms;
}

void KoalaBot::setParts(Head const &head)
{
    this->_head = head;
}

void KoalaBot::setParts(Legs const &legs)
{
    this->_legs = legs;
}

void KoalaBot::swapParts(Arms &arms)
{
    Arms tmp = this->_arms;

    this->_arms = arms;
    arms = tmp;
}

void KoalaBot::swapParts(Legs &legs)
{
    Legs tmp = this->_legs;

    this->_legs = legs;
    legs = tmp;
}

void KoalaBot::swapParts(Head &head)
{
    Head tmp = this->_head;

    this->_head = head;
    head = tmp;
}

void KoalaBot::informations() const
{
    std::cout << "[KoalaBot] " << this->_serial << std::endl;
    this->_arms.informations();
    this->_legs.informations();
    this->_head.informations();
}

bool KoalaBot::status() const
{
    if (this->_head.isFunctionnal() && this->_arms.isFunctionnal() && this->_legs.isFunctionnal())
        return true;
    else
        return false;
}