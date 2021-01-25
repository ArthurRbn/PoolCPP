//
// Created by nicolass on 16/01/2021.
//

#include <iostream>
#include "../Object.hpp"
#include "../Toy.hpp"
#include "../Teddy.hpp"
#include "../LittlePony.hpp"

Object **MyUnitests() {
    auto **objectArray = new Object*[3];
    objectArray[0] = new LittlePony("happy pony");
    objectArray[1] = new Teddy("cuddles");
    objectArray[2] = nullptr;
    return objectArray;
}

int main() {
    Object **result = MyUnitests();

    for (int i = 0; i < 2; i++) {
        std::cout << "Object number " << i + 1 << std::endl;
        std::cout << *result[i] << std::endl;
    }
    std::cout << "Take Toy1: ";
    Toy *toy1 = dynamic_cast<Toy*>(result[0]);
    toy1->isTaken();
    std::cout << "Take Toy2: ";
    Toy *toy2 = dynamic_cast<Toy*>(result[1]);
    toy2->isTaken();
    return 0;
}