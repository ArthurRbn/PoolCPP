/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD16-arthur.robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_DOMESTICKOALA_HPP
#define B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_DOMESTICKOALA_HPP

#include <string>
#include <vector>
#include "KoalaAction.hpp"

using methodPointer_t = void(KoalaAction::*)(const std::string &);

class DomesticKoala {
public:
    DomesticKoala(KoalaAction &);
    ~DomesticKoala();
    DomesticKoala(const DomesticKoala &);
    DomesticKoala &operator=(const DomesticKoala &);
    const std::vector<methodPointer_t> *getActions() const;
    void learnAction(unsigned char command, methodPointer_t action);
    void unlearnAction(unsigned char command);
    void doAction(unsigned char command, const std::string &param);
    void setKoalaAction(KoalaAction &);
private:
    std::vector<methodPointer_t> _methods;
    KoalaAction _action;
};

#endif //B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_DOMESTICKOALA_HPP
