//
// Created by nicolass on 16/01/2021.
//

#include "TableRand.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"

TableRand::TableRand() {
    int j;
    srand (time(nullptr));
    for (; this->_table.size() != 10;) {
        j = rand() % 4;
        if (j == 0) {
            this->_table.push_back(new Box());
        }
        if (j == 1) {
            this->_table.push_back(new GiftPaper());
        }
        if (j == 2) {
            this->_table.push_back(new Teddy("Leo"));
        }
        if (j == 3) {
            this->_table.push_back(new LittlePony("zebi"));
        }
    }
}

TableRand::~TableRand() {
    for (auto & i : this->_table) {
        delete i;
    }
}
