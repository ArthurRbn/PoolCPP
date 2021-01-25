/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD06-arthur.robine
** File description:
** Exercice 5
*/

#ifndef B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_KOALADOCTORLIST_HPP
#define B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_KOALADOCTORLIST_HPP

#include "KoalaDoctor.hpp"

class KoalaDoctorList {
    public:
        KoalaDoctorList(KoalaDoctor *doc);
        ~KoalaDoctorList();
        bool isEnd();
        void append(KoalaDoctorList *node);
        KoalaDoctor *getFromName(std::string name);
        KoalaDoctorList *remove(KoalaDoctorList *ptr);
        KoalaDoctorList *removeFromName(std::string name);
        void dump();
    private:
        KoalaDoctor *doc;
        KoalaDoctorList *next;
};

#endif //B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_KOALADOCTORLIST_HPP
