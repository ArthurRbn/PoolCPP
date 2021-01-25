//
// Created by nicolass on 15/01/2021.
//

#include <iostream>
#include "Teddy.hpp"

Teddy::Teddy(const std::string& name) : Toy("teddy", name) {}

void Teddy::isTaken() {
    std::cout << "gra hu" << std::endl;
}

Teddy::~Teddy() = default;
