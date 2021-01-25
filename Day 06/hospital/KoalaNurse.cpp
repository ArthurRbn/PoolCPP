/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD06-arthur.robine
** File description:
** Exercice 3
*/

#include <iostream>
#include <fstream>
#include "KoalaNurse.hpp"
#include "SickKoala.hpp"

KoalaNurse::KoalaNurse(int id)
{
    this->ID = id;
    this->work = false;
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << this->ID << ": Finally some rest!" << std::endl;
}

int KoalaNurse::getID()
{
    return this->ID;
}

void KoalaNurse::giveDrug(std::string drug, SickKoala *patient)
{
    patient->takeDrug(drug);
}

std::string KoalaNurse::readReport(std::string filename)
{
    std::string error("");
    std::string extension(".report");
    std::string drug;
    std::ifstream ifs(filename);
    int pos = filename.find(extension, 0);
    int count = 0;

    while (std::string::size_type(pos) != std::string::npos) {
        count++;
        pos = filename.find(extension, pos + extension.size());
    }
    error.clear();
    if (count != 1)
        return error;
    drug.assign((std::istreambuf_iterator<char>(ifs)),(std::istreambuf_iterator<char>()));
    if (drug.length() == 0) {
        return error;
    }
    pos = filename.find(extension, 0);
    filename.replace(pos, extension.size(), "");
    drug[drug.length() - 1] = '\0';
    std::cout << "Nurse " << this->ID << ": Kreog! Mr." << filename << " needs a " << drug << "!" << std::endl;
    return drug;
}

void  KoalaNurse::timeCheck(void)
{
    if (!this->work)
        std::cout << "Nurse " << this->ID << ": Time to get to work!" << std::endl;
    else if (this->work)
        std::cout << "Nurse " << this->ID << ": Time to go home to my eucalyptus forest!" << std::endl;
    this->work = !this->work;
}