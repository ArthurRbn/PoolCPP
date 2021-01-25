/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD06-arthur.robine
** File description:
** Exercice 5
*/

#include "SickKoala.hpp"
#include "SickKoalaList.hpp"

SickKoalaList::SickKoalaList(SickKoala *koala)
{
    this->koala = koala;
    this->next = nullptr;
}

SickKoalaList::~SickKoalaList()
{
}

bool SickKoalaList::isEnd()
{
    if (this->next == nullptr)
        return true;
    else
        return false;
}

void SickKoalaList::append(SickKoalaList *node)
{
    SickKoalaList *list = this;

    while (list && list->next) {
        list = list->next;
    }
    list->next = node;
}

SickKoala *SickKoalaList::getFromName(std::string name)
{
    SickKoalaList *list = this;

    if (list && list->koala && list->koala->getName() == name)
        return list->koala;
    while (list) {
        if (list->koala && list->koala->getName() == name)
            return list->koala;
        list = list->next;
    }
    return nullptr;
}

SickKoalaList *SickKoalaList::remove(SickKoalaList *toRemove)
{
    SickKoalaList *list = this;
    SickKoalaList *tmp = nullptr;

    if (this == toRemove) {
        delete this;
        return list;
    }
    while (list != nullptr && list->next != toRemove) {
        list = list->next;
    }
    if (!list || toRemove == nullptr) {
        return this;
    }
    tmp = list->next;
    list->next = list->next->next;
    delete tmp;
    return this;
}

SickKoalaList *SickKoalaList::removeFromName(std::string name)
{
    SickKoalaList *list = this;
    SickKoalaList *tmp = nullptr;

    if (this->koala && this->koala->getName() == name) {
        tmp = this->next;
        delete this;
        return tmp;
    }
    while (list->next != nullptr) {
        if (list->next->koala && list->next->koala->getName() == name)
            break;
        list = list->next;
    }
    if (!list->next)
        return this;
    tmp = list->next;
    list->next = list->next->next;
    delete tmp;
    return this;
}

SickKoala *SickKoalaList::getContent()
{
    return this->koala;
}

SickKoalaList * SickKoalaList::getNext()
{
    return this->next;
}

void SickKoalaList::dump()
{
    SickKoalaList *list = this;

    std::cout << "Patients: ";
    while (list) {
        if (list->koala)
            std::cout << list->koala->getName();
        else
            std::cout << "[nullptr]";
        if (list->isEnd())
            std::cout << ".";
        else
            std::cout << ", ";
        list = list->next;
    }
    std::cout << std::endl;
}