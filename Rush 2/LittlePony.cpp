//
// Created by nicolass on 15/01/2021.
//

#include <iostream>
#include "LittlePony.hpp"

LittlePony::LittlePony(const std::string &name) : Toy("littlePony", name) {}

void LittlePony::isTaken() {
    std::cout << "yo man" << std::endl;
}

LittlePony::~LittlePony() = default;
