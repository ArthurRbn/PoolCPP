//
// Created by nicolass on 16/01/2021.
//

#include <iostream>
#include "PapaXmasTable.hpp"
#include "Teddy.hpp"
#include "LittlePony.hpp"

PapaXmasTable::PapaXmasTable() = default;

bool PapaXmasTable::check() const {
    int toy = 0;
    int box = 0;
    int giftPaper = 0;
    for (auto i : this->_table) {
        if (i->getType() == "toy") {
            toy += 1;
        }
        if (i->getType() == "Wrap" && i->getSecondType() == "Box") {
            box += 1;
        }
        if (i->getType() == "Wrap" && i->getSecondType() == "GiftPaper") {
            giftPaper += 1;
        }
    }
    if (toy && box && giftPaper) {
        return true;
    }
    return false;
}

Object *PapaXmasTable::takeToy() {
    Object *obj;
    Toy *toy;
    for (unsigned long i = 0; i < this->_table.size(); i++) {
        if (this->_table[i]->getType() == "toy") {
            obj = this->_table[i];
            this->_table.erase(this->_table.begin() + i);
            toy = dynamic_cast<Toy*>(obj);
            toy->isTaken();
            return obj;
        }
    }
    return nullptr;
}

Object *PapaXmasTable::takeBox() {
    Object *obj;
    for (unsigned long i = 0; i < this->_table.size(); i++) {
        if (this->_table[i]->getType() == "Wrap" && this->_table[i]->getSecondType() == "Box") {
            obj = this->_table[i];
            this->_table.erase(this->_table.begin() + i);
            return obj;
        }
    }
    return nullptr;
}

Object *PapaXmasTable::takeGiftPaper() {
    Object *obj;
    for (unsigned long i = 0; i < this->_table.size(); i++) {
        if (this->_table[i]->getType() == "Wrap" && this->_table[i]->getSecondType() == "GiftPaper") {
            obj = this->_table[i];
            this->_table.erase(this->_table.begin() + i);
            return obj;
        }
    }
    return nullptr;
}

bool PapaXmasTable::add(Object *object) {
    this->_table.push_back(object);
    if (this->_table.size() > 10) {
        std::cout << "Table is full it's going to collapse..." << std::endl;
        return false;
    }
    return true;
}

const std::vector<Object *> &PapaXmasTable::getTable() const {
    return _table;
}

ITable *createTable() {
    ITable *table = new PapaXmasTable;
    table->add(new LittlePony("happy pony"));
    table->add(new Teddy("cuddles"));
    return table;
}

std::vector<std::string> PapaXmasTable::whats_on_table(void)
{
    std::vector<std::string> on_table;

    for (unsigned long index = 0; index < _table.size(); index++)
        on_table.push_back(_table[index]->getSecondType());
    return (on_table);
}