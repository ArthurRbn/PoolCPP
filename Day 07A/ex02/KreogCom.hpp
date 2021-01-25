/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD07A_arthur_robine
** File description:
** Exercice 02
*/

#ifndef B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_KREOGCOM_HPP
#define B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_KREOGCOM_HPP

#include <iostream>

class KreogCom {
public:
    KreogCom(int x, int y, int serial);
    ~KreogCom();
    void addCom(int x, int y, int serial);
    void removeCom();
    KreogCom *getCom();
    void ping() const;
    void locateSquad() const;
    void setPrev(KreogCom *prev);
private:
    const int m_serial;
    int _x;
    int _y;
    KreogCom *_next;
    KreogCom *_prev;
};

#endif //B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_KREOGCOM_HPP
