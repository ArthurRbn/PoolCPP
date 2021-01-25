/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD06-arthur.robine
** File description:
** Exercice 5
*/

#include "KoalaNurseList.hpp"

KoalaNurseList::KoalaNurseList(KoalaNurse *nurse)
{
    this->nurse = nurse;
    this->next = nullptr;
}

KoalaNurseList::~KoalaNurseList()
{
}

bool KoalaNurseList::isEnd()
{
    if (this->next == NULL)
        return true;
    else
        return false;
}

void KoalaNurseList::append(KoalaNurseList *node)
{
    KoalaNurseList *list = this;

    while (list && list->next) {
        list = list->next;
    }
    list->next = node;
}

KoalaNurse *KoalaNurseList::getFromID(int ID)
{
    KoalaNurseList *list = this->next;

    if (list && list->nurse && list->nurse->getID() == ID)
        return list->nurse;
    while (list) {
        if (list->nurse && list->nurse->getID() == ID)
            return list->nurse;
        list = list->next;
    }
    return nullptr;
}

KoalaNurseList *KoalaNurseList::remove(KoalaNurseList *toRemove)
{
    KoalaNurseList *list = this;
    KoalaNurseList *tmp = nullptr;

    if (this == toRemove) {
        delete this;
        return list;
    }
    while (list != nullptr && list->next != toRemove) {
        list = list->next;
    }
    if (!list || toRemove == nullptr)
        return this;
    tmp = list->next;
    list->next = list->next->next;
    delete tmp;
    return this;
}

KoalaNurseList *KoalaNurseList::removeFromID(int ID)
{
    KoalaNurseList *list = this;
    KoalaNurseList *tmp = nullptr;

    if (this->nurse && this->nurse->getID() == ID) {
        tmp = this->next;
        delete this;
        return tmp;
    }
    while (list->next != nullptr) {
        if (list->next->nurse && list->next->nurse->getID() == ID)
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

void KoalaNurseList::dump()
{
    KoalaNurseList *list = this;

    std::cout << "Nurses: ";
    while (list) {
        if (list->nurse)
            std::cout << list->nurse->getID();
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