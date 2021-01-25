/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 02
*/

#include "Squad.hpp"

Squad::Squad(): ISquad()
{
    _marines = std::vector<ISpaceMarine *>();
}

Squad::Squad(Squad const &copy)
{
    ISpaceMarine *del = nullptr;

    while (!_marines.empty()) {
        del = _marines.front();
        _marines.erase(_marines.begin());
        delete del;
    }
    for (size_t i = 0; i < copy._marines.size(); i++)
        _marines.push_back(copy._marines[i]->clone());
}

Squad::~Squad()
{
    ISpaceMarine *del = nullptr;

    while (!_marines.empty()) {
        del = _marines.front();
        _marines.erase(_marines.begin());
        delete del;
    }
}

int Squad::getCount() const
{
    return _marines.size();
}

ISpaceMarine *Squad::getUnit(int index)
{
    size_t new_index = index;

    if (new_index > _marines.size())
        return nullptr;
    else
        return _marines[new_index];
}

void Squad::operator=(const Squad &copy)
{
    ISpaceMarine *del = nullptr;

    while (!_marines.empty()) {
        del = _marines.front();
        _marines.erase(_marines.begin());
        delete del;
    }
    for (size_t i = 0; i < copy._marines.size(); i++)
        _marines.push_back(copy._marines[i]->clone());
}

int Squad::push(ISpaceMarine *new_marine)
{
    size_t i = 0;

    if (new_marine == nullptr)
        return _marines.size();
    for (i = 0; i < _marines.size(); ++i) {
        if (_marines[i] == new_marine)
            break;
    }
    if (i != _marines.size()) {
        return _marines.size();
    } else {
        _marines.push_back(new_marine);
        return _marines.size();
    }
}