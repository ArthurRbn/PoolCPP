//
// Created by nicolass on 15/01/2021.
//

#include "Wrap.hpp"
#include "Object.hpp"
#include <iostream>

Wrap::Wrap(std::string const& type) : Object("Wrap", type), _wrap_type(type)
{
    _wrap_is_open = 1;
    _wrap_is_full = 0;
}

Wrap::~Wrap(void)
{
}

bool Wrap::getWrapIsOpen(void) const
{
    return (_wrap_is_open);
}

bool Wrap::getWrapIsFull(void) const
{
    return (_wrap_is_full);
}

void Wrap::openMe(void)
{
    _wrap_is_open = 1;
}

void Wrap::closeMe(void)
{
    _wrap_is_open = 0;
}

void Wrap::wrapMeThat(Object *obj)
{
    if (getWrapIsFull()) {
        std::cerr << "Error : the wrap is full ! !" << std::endl;
        return;
    }
    if (!getWrapIsOpen()) {
        std::cerr << "Error : the wrap is closed, you must to open it first !" << std::endl;
        return;
    }
    _obj = obj;
    _wrap_is_full = 1;
    closeMe();
    std::cout << "tuuuuttuuuttuut" << std::endl;
}

Wrap *Wrap::takeWrap(void)
{
    std::cout << "whistles while working" << std::endl;
    return (this);
}

Object *Wrap::getObject(void)
{
    return (_obj);
}