//
// Created by nicolass on 16/01/2021.
//

#include <iostream>
#include "ConveyorBelt.hpp"
#include "GiftPaper.hpp"
#include "Box.hpp"
#include "IConveyorBelt.hpp"


ConveyorBelt::ConveyorBelt() {
    srand (time(nullptr));
}

ConveyorBelt::~ConveyorBelt() {}

Object *ConveyorBelt::getObject() const {
    return _object;
}

Object *ConveyorBelt::IN() {
    Object *newObject;
    if (this->getObject() != nullptr) {
        std::cerr << "Cannot press IN button, already an object on the conveyor belt." << std::endl;
        return nullptr;
    }
    if (rand() % 2) {
        newObject = new GiftPaper();
    } else {
        newObject = new Box();
    }
    std::cout << "New " << newObject->getSecondType() << " on the conveyor belt." << std::endl;
    return newObject;
}

void ConveyorBelt::OUT() {
    this->_object = dynamic_cast<GiftPaper*>(this->_object);
    if (this->_object == nullptr) {
        std::cerr << "Cannot press OUT button if nothing is on the conveyor belt." << std::endl;
    } else {
        std::cout << "New gift wrapped sent to Santa Claus." << std::endl;
        this->_object = nullptr;
    }
}

void ConveyorBelt::add(Object *gift) {
    if (this->_object) {
        std::cerr << "Cannot add gift if there is already something on the conveyor belt." << std::endl;
    } else {
        this->_object = gift;
    }
}

IConveyorBelt *createConveyorBelt() {
    return new ConveyorBelt;
}

