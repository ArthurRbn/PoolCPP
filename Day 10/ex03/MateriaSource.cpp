/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 03
*/

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
    _source = std::vector<AMateria *>();
}

MateriaSource::~MateriaSource()
{
    AMateria *del = nullptr;

    while (!_source.empty()) {
        del = _source.front();
        _source.erase(_source.begin());
        delete del;
    }
}

void MateriaSource::learnMateria(AMateria *copy)
{
    auto cast = copy;
    auto *materia = new AMateria(*cast);

    if (_source.size() >= 4) {
        delete materia;
        return;
    }
    _source.push_back(materia);
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    AMateria *materia = nullptr;
    int i = _source.size() - 1;

    while (i >= 0) {
        if (_source[i]->getType() == type)
            break;
        i--;
    }
    if (i != -1 && _source[i]->getType() == "ice")
        materia = new Ice(*_source[i]);
    else if (i != -1 && _source[i]->getType() == "cure")
        materia = new Cure(*_source[i]);
    else
        materia = new AMateria(type);
    return materia;
}
