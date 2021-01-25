//
// Created by nicolass on 15/01/2021.
//

#include "Object.hpp"

#include <utility>

Object::Object(const std::string &type, const std::string &SecondType, const std::string &name) : _type(type), _secondType(SecondType), _name(name) {}

const std::string &Object::getType() const {
    return _type;
}

const std::string &Object::getSecondType() const {
    return _secondType;
}

const std::string &Object::getName() const {
    return _name;
}

Object::~Object() = default;


std::ostream &operator<<(std::ostream &os, const Object &object) {
    if (object.getType() == "toy") {
        os << "Type of the object: " << object.getType() <<std::endl << "Toy type: " << object.getSecondType() << std::endl << "Toy name: " << object.getName();
    }
    if (object.getType() == "wrap") {
        os << "Type of the object: " << object.getType() <<std::endl << "wrap type: " << object.getSecondType();
    }
    return os;
}