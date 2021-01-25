/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD13_arthur_robine
** File description:
** Created by arthur,
*/

#include <fstream>
#include "ToyStory.hpp"

ToyStory::ToyStory()
{
}

ToyStory::~ToyStory()
{
}

static void useToy(std::string line, Toy &toy, bool (Toy::*func)(const std::string &), int &i)
{
    size_t pos = 0;

    if (line.rfind("picture:", 0) == 0) {
        line.erase(0, 8);
        toy.setAscii(line);
        --i;
        if (toy.error.type == Toy::Error::UNKNOWN)
            std::cout << toy.getAscii() << std::endl;
    } else  {
        (toy.*func)(line);
    }
}

void ToyStory::tellMeAStory(const std::string &filename, Toy &toy1, bool (Toy::*func1)(const std::string&), Toy &toy2, bool (Toy::*func2)(const std::string&))
{
    std::ifstream input(filename.c_str());
    std::string line;
    int i = 0;

    if (input.is_open()) {
        std::cout << toy1.getAscii() << std::endl;
        std::cout << toy2.getAscii() << std::endl;
        while (!input.eof()) {
            getline(input, line);
            if (i % 2 == 0) {
                useToy(line, toy1, func1, i);
                if (toy1.error.type != Toy::Error::UNKNOWN) {
                    std::cout << toy1.error.where() << ": " << toy1.error.what() << std::endl;
                    return;
                }
            } else if (i % 2 == 1) {
                useToy(line, toy2, func2, i);
                if (toy2.error.type != Toy::Error::UNKNOWN) {
                    std::cout << toy2.error.where() << ": " << toy2.error.what() << std::endl;
                    return;
                }
            }
            ++i;
        }
    } else {
        std::cout << "Bad Story" << std::endl;
    }
}