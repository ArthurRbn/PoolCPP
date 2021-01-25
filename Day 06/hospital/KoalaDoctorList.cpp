/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD06-arthur.robine
** File description:
** Exercice 6
*/

#include "KoalaDoctorList.hpp"

KoalaDoctorList::KoalaDoctorList(KoalaDoctor *doc)
{
    this->doc = doc;
    this->next = nullptr;
}

KoalaDoctorList::~KoalaDoctorList()
{
}

bool KoalaDoctorList::isEnd()
{
    if (this->next == nullptr)
        return true;
    else
        return false;
}

void KoalaDoctorList::append(KoalaDoctorList *node)
{
    KoalaDoctorList *list = this;

    while (list && list->next) {
        list = list->next;
    }
    list->next = node;
}

KoalaDoctor *KoalaDoctorList::getFromName(std::string name)
{
    KoalaDoctorList *list = this;

    if (list && list->doc && list->doc->getName() == name)
        return list->doc;
    while (list) {
        if (list->doc && list->doc->getName() == name)
            return list->doc;
        list = list->next;
    }
    return nullptr;
}

KoalaDoctorList *KoalaDoctorList::remove(KoalaDoctorList *ptr)
{
    KoalaDoctorList *list = this;
    KoalaDoctorList *tmp = nullptr;

    if (this == ptr) {
        delete this;
        return list;
    }
    while (list != nullptr && list->next != ptr) {
        list = list->next;
    }
    if (!list || ptr == nullptr)
        return this;
    tmp = list->next;
    list->next = list->next->next;
    delete tmp;
    return this;
}

KoalaDoctorList *KoalaDoctorList::removeFromName(std::string name)
{
    KoalaDoctorList *list = this;
    KoalaDoctorList *tmp = nullptr;

    if (this->doc && this->doc->getName() == name) {
        tmp = this->next;
        delete this;
        return tmp;
    }
    while (list->next != nullptr) {
        if (list->next->doc && list->next->doc->getName() == name)
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

void KoalaDoctorList::dump()
{
    KoalaDoctorList *list = this;

    std::cout << "Doctors: ";
    while (list) {
        if (list->doc)
            std::cout << list->doc->getName();
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