/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD06-arthur.robine
** File description:
** Exercice 4
*/

#include <iostream>
#include <fstream>
#include "KoalaDoctor.hpp"
#include "SickKoala.hpp"

KoalaDoctor::KoalaDoctor(std::string name)
{
    this->name = name;
    this->work = false;
    std::cout << "Dr." << name << ": I'm Dr." << name << "! How do you kreog?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
}

std::string KoalaDoctor::getName()
{
    return this->name;
}

void KoalaDoctor::timeCheck()
{
    if (!this->work)
        std::cout << "Dr." << this->name << ": Time to get to work!" << std::endl;
    else if (this->work)
        std::cout << "Dr." << this->name << ": Time to go home to my eucalyptus forest!" << std::endl;
    this->work = !this->work;
}

void KoalaDoctor::diagnose(SickKoala *patient)
{
    std::string filename(patient->getName());
    const char *drugs[5] = {
            "Mars",
            "Kinder",
            "Crunch",
            "Maroilles",
            "Eucalyptus leaf"
    };

    std::cout << "Dr." << this->name << ": So what's goerking you Mr." << patient->getName() << "?" << std::endl;
    patient->poke();
    filename.append(".report");
    std::ofstream outfile(filename);
    outfile << drugs[random() % 5] << std::endl;
    outfile.close();
}