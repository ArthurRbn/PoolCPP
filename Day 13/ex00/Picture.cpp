/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD13-arthur.robine
** File description:
** Created by arthur,
*/

#include <fstream>
#include <sstream>
#include "Picture.hpp"

Picture::Picture()
{
    data = std::string("");
}

Picture::Picture(const std::string &file)
{
    this->getPictureFromFile(file);
}

Picture::~Picture()
{
}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::ifstream input(file.data());
    std::string line;

    if (input.is_open()) {
        while (!input.eof()) {
            getline(input, line);
            data += line;
            data += '\n';
        }
        data.pop_back();
        return true;
    } else
        data = std::string("ERROR");
    return false;
}