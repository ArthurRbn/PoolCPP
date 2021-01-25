/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD13_arthur_robine
** File description:
** Created by arthur,
*/

#include "Picture.hpp"
#include "Toy.hpp"

Toy::Toy()
{
    _type = BASIC_TOY;
    _name = std::string("toy");
    _picture = Picture();
}

Toy::Toy(const Toy *copy)
{
    _type = copy->getType();
    _name = std::string(copy->getName());
    _picture = copy->_picture;
}

Toy::Toy(ToyType type, const std::string &name, const std::string &filename)
{
    _type = type;
    _name = std::string(name);
    _picture = Picture(filename);
}

Toy &Toy::operator=(const Toy &copy)
{
    _type = copy.getType();
    _name = std::string(copy.getName());
    _picture = copy._picture;
    return *this;
}

Toy::~Toy()
{
}

Toy::ToyType Toy::getType() const
{
    return _type;
}

const std::string &Toy::getName() const
{
    return _name;
}

void Toy::setName(const std::string &name)
{
    _name = name;
}

bool Toy::setAscii(const std::string &filename)
{
    return _picture.getPictureFromFile(filename);
}

std::string Toy::getAscii() const
{
    return _picture.data;
}