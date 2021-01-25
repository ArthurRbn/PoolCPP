/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD16-arthur.robine
** File description:
** Created by arthur,
*/

#include "DomesticKoala.hpp"

DomesticKoala::DomesticKoala(KoalaAction &action): _methods(256), _action(action)
{
}

DomesticKoala::DomesticKoala(const DomesticKoala &copy): _methods(copy._methods), _action(copy._action)
{
}

DomesticKoala & DomesticKoala::operator=(const DomesticKoala &copy)
{
    while (!_methods.empty())
        _methods.pop_back();
    _methods = copy._methods;
    return *this;
}

DomesticKoala::~DomesticKoala()
{
}

const std::vector<methodPointer_t> *DomesticKoala::getActions() const
{
    return &_methods;
}

void DomesticKoala::learnAction(unsigned char command, methodPointer_t action)
{
    _methods[command] = action;
}

void DomesticKoala::unlearnAction(unsigned char command)
{
    _methods[command] = nullptr;
}

void DomesticKoala::doAction(unsigned char command, const std::string &param)
{
    if (_methods[command])
        (_action.*_methods[command])(param);
}

void DomesticKoala::setKoalaAction(KoalaAction &action)
{
    _action = action;
}
