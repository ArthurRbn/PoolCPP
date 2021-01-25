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
    error = Error();
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
    bool val = _picture.getPictureFromFile(filename);

    if (val == false)
        error.type = Error::PICTURE;
    return val;
}

std::string Toy::getAscii() const
{
    return _picture.data;
}

void Toy::speak(const std::string &toSay)
{
    std::cout << _name << " \"" << toSay << "\"" << std::endl;
}

bool Toy::speak_es(const std::string &toSay)
{
    error.type = Error::SPEAK;
    return false;
}

Toy &Toy::operator<<(const std::string &picture)
{
    this->_picture.data = std::string(picture);
    return *this;
}

Toy::Error Toy::getLastError() const
{
    return error;
}

Toy::Error::Error()
{
    type = UNKNOWN;
}

const std::string Toy::Error::what() const
{
    if (type == PICTURE)
        return std::string("bad new illustration");
    else if (type == SPEAK)
        return std::string("wrong mode");
    else
        return std::string("");
}

const std::string Toy::Error::where() const
{
    if (type == PICTURE)
        return std::string("setAscii");
    else if (type == SPEAK)
        return std::string("speak_es");
    else
        return std::string("");
}

std::ostream& operator<<(std::ostream &out, const Toy &toy)
{
    out << toy.getName() << std::endl << toy.getAscii() << std::endl;
    return out;
}