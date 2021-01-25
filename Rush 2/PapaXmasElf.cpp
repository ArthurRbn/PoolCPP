//
// Created by nicolass on 15/01/2021.
//

#include "PapaXmasElf.hpp"
#include <iostream>

PapaXmasElf::PapaXmasElf(ITable *table)
{
    _table = table;
    _conveyor_belt = new ConveyorBelt();
    _in_hand = nullptr;
}

PapaXmasElf::~PapaXmasElf(void)
{
}

void PapaXmasElf::wrap(Wrap *wrap, Object *obj)
{
    wrap->wrapMeThat(obj);
}

Object *PapaXmasElf::pressIn(void)
{
    return (_conveyor_belt->IN());
}

void PapaXmasElf::pressOut(void)
{
    _conveyor_belt->OUT();
}

std::vector<std::string> PapaXmasElf::lookAtTable(void)
{
    return _table->whats_on_table();
}

bool PapaXmasElf::put_on_table(Object *object)
{
    return _table->add(object);
}