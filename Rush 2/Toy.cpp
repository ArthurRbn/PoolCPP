//
// Created by nicolass on 15/01/2021.
//

#include "Toy.hpp"

Toy::Toy(const std::string &type, const std::string &name) : Object("toy", type, name) {
    (void)type;
}

Toy::~Toy() = default;

