/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 03
*/

#include "Character.hpp"

Character::Character(const std::string &name)
{
    _name = std::string(name);
    _equiped = std::vector<AMateria *>();
}

Character::~Character()
{
    AMateria *del = nullptr;

    while (!_equiped.empty()) {
        del = _equiped.front();
        _equiped.erase(_equiped.begin());
        delete del;
    }
}

Character::Character(Character const &copy)
{
    AMateria *del = nullptr;

    while (!_equiped.empty()) {
        del = _equiped.front();
        _equiped.erase(_equiped.begin());
        delete del;
    }
    for (size_t i = 0; i < copy._equiped.size(); i++)
        _equiped.push_back(copy._equiped[i]->clone());
}

void Character::operator=(const Character &copy)
{
    AMateria *del = nullptr;

    while (!_equiped.empty()) {
        del = _equiped.front();
        _equiped.erase(_equiped.begin());
        delete del;
    }
    for (size_t i = 0; i < copy._equiped.size(); i++)
        _equiped.push_back(copy._equiped[i]->clone());
}

const std::string &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    if (_equiped.size() == 4)
        return;
    _equiped.push_back(m);
}

void Character::unequip(int idx)
{
    if ((size_t)idx >= _equiped.size())
        return;
    _equiped.erase(_equiped.begin() + idx);
}

void Character::use(int idx, ICharacter &target)
{
    if ((size_t)idx >= _equiped.size())
        return;
    _equiped[idx]->use(target);
}