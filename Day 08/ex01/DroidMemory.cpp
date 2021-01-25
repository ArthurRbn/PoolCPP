/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD08-arthur.robine
** File description:
** Exercice 1
*/

#include "DroidMemory.hpp"

DroidMemory::DroidMemory()
{
    _Exp = 0;
    _Fingerprint = random();
}

DroidMemory::~DroidMemory()
{
}

void DroidMemory::setFingerprint(size_t Fingerprint)
{
    _Fingerprint = Fingerprint;
}

size_t DroidMemory::getFingerprint() const
{
    return _Fingerprint;
}

void DroidMemory::setExp(size_t Exp)
{
    _Exp = Exp;
}

size_t DroidMemory::getExp() const
{
    return _Exp;
}

DroidMemory &DroidMemory::operator<<(DroidMemory &mem)
{
    _Exp += mem.getExp();
    _Fingerprint = mem.getFingerprint() ^ _Fingerprint;
    return *this;
}

DroidMemory &DroidMemory::operator>>(DroidMemory &mem)
{
    mem.setExp(mem.getExp() + _Exp);
    mem.setFingerprint(mem.getFingerprint() ^ _Fingerprint);
    return *this;
}

DroidMemory &DroidMemory::operator+=(DroidMemory &mem)
{
    _Exp += mem.getExp();
    _Fingerprint = mem.getFingerprint() ^ _Fingerprint;
    return *this;
}

DroidMemory &DroidMemory::operator+=(size_t xp)
{
    _Exp += xp;
    _Fingerprint = _Fingerprint ^ xp;
    return *this;
}

DroidMemory &DroidMemory::operator+(DroidMemory &mem)
{
    _Exp += mem.getExp();
    _Fingerprint = mem.getFingerprint() ^ _Fingerprint;
    return *new DroidMemory;
}

DroidMemory &DroidMemory::operator+(size_t xp)
{
    _Exp += xp;
    _Fingerprint = _Fingerprint ^ xp;
    return *new DroidMemory;
}

std::ostream &operator<<(std::ostream &out, DroidMemory &mem)
{
    out << "DroidMemory '" << mem.getFingerprint() << "', " << mem.getExp();
    return out;
}