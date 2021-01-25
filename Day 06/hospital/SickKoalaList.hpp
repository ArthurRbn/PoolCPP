/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD06-arthur.robine
** File description:
** Exercice 5
*/

#ifndef B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_SICKKOALALIST_HPP
#define B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_SICKKOALALIST_HPP

#include "SickKoala.hpp"

class SickKoalaList {
    public:
        SickKoalaList(SickKoala *koala);
        ~SickKoalaList();
        bool isEnd();
        void append(SickKoalaList *node);
        SickKoala *getFromName(std::string name);
        SickKoalaList *remove(SickKoalaList *toRemove);
        SickKoalaList *removeFromName(std::string name);
        SickKoala *getContent();
        SickKoalaList *getNext();
        void dump();
    private:
        SickKoala *koala;
        SickKoalaList *next;
};

#endif //B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_SICKKOALALIST_HPP
