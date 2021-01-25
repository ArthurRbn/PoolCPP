/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD06-arthur.robine
** File description:
** Exerice 5
*/

#ifndef B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_KOALANURSELIST_HPP
#define B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_KOALANURSELIST_HPP

#include "KoalaNurse.hpp"

class KoalaNurseList {
    public:
        KoalaNurseList(KoalaNurse *nurse);
        ~KoalaNurseList();
        bool isEnd();
        void append(KoalaNurseList *node);
        KoalaNurse *getFromID(int ID);
        KoalaNurseList *remove(KoalaNurseList *toRemove);
        KoalaNurseList *removeFromID(int ID);
        void dump();
    private:
        KoalaNurse *nurse;
        KoalaNurseList *next;
};

#endif //B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_KOALANURSELIST_HPP
