/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD07A_arthur_robine
** File description:
** Exercice 02
*/

#include "KreogCom.hpp"

KreogCom::KreogCom(int x, int y, int serial): m_serial(serial), _x(x), _y(y), _next(nullptr), _prev(nullptr)
{
    std::cout << "KreogCom " << serial << " initialized" << std::endl;
}

KreogCom::~KreogCom()
{
    std::cout << "KreogCom " << this->m_serial << " shutting down" << std::endl;
    if (_prev) {
        _prev->_next = _next;
    }
}

void KreogCom::setPrev(KreogCom *prev)
{
    _prev = prev;
}

void KreogCom::addCom(int x, int y, int serial)
{
    KreogCom *new_com = new KreogCom(x, y, serial);

    new_com->setPrev(this);
    if (this->_next == nullptr) {
        this->_next = new_com;
    } else if (this->_next) {
        new_com->_next = this->_next;
        this->_next = new_com;
    }
}

KreogCom *KreogCom::getCom()
{
    return this->_next;
}

void KreogCom::removeCom()
{
    KreogCom *tmp = nullptr;

    if (this->_next == nullptr)
        return;
    tmp = this->_next;
    this->_next = this->_next->_next;
    delete tmp;
}

void KreogCom::ping() const
{
    std::cout << "KreogCom " << this->m_serial << " currently at " << this->_x << " " << this->_y << std::endl;
}

void KreogCom::locateSquad() const
{
    KreogCom *tmp = this->_next;

    while (tmp) {
        tmp->ping();
        tmp = tmp->_next;
    }
    this->ping();
}