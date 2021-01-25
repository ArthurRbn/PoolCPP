/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07M-arthur.robine
** File description:
** Exerice 0
*/

#include <iostream>
#include "Federation.hpp"

Federation::Starfleet::Ship::Ship()
{
    std::string name("Entreprise");

    this->_length = 289;
    this->_width = 132;
    this->_name = name;
    this->_maxWarp = 6;
    this->_location = this->_home;
    this->_shield = 100;
    this->_photonTorpedo = 0;
    this->captain = nullptr;
    this->core = nullptr;
    std::cout << "The ship USS " << name << " has been finished." << std::endl;
    std::cout << "It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << this->_maxWarp << "!" << std::endl;
}

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = maxWarp;
    this->_location = this->_home;
    this->_shield = 100;
    this->_photonTorpedo = torpedo;
    this->captain = nullptr;
    this->core = nullptr;
    std::cout << "The ship USS " << name << " has been finished." << std::endl;
    std::cout << "It is " << length << " m in length and " << width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << maxWarp << "!" << std::endl;
    if (torpedo != 0)
        std::cout << "Weapons are set: " << torpedo << " torpedoes ready." << std::endl;
}

Federation::Starfleet::Ship::~Ship()
{
}

int Federation::Starfleet::Ship::getShield()
{
    return this->_shield;
}

void Federation::Starfleet::Ship::setShield(int shield)
{
    this->_shield = shield;
}

int Federation::Starfleet::Ship::getTorpedo()
{
    return this->_photonTorpedo;
}

void Federation::Starfleet::Ship::setTorpedo(int torpedo)
{
    this->_photonTorpedo = torpedo;
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    this->core = core;
    std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore()
{
    if (this->core && this->core->checkReactor()->isStable())
        std::cout << "USS " << this->_name << ": The core is stable at the time." << std::endl;
    else if (this->core && !this->core->checkReactor()->isStable())
        std::cout << "USS " << this->_name << ": The core is unstable at the time." << std::endl;
}

void Federation::Starfleet::Ship::promote(Captain *captain)
{
    this->captain = captain;
    std::cout << captain->getName() << ": I'm glad to be the captain of the USS " << this->_name << "." << std::endl;
}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
    bool val;

    if (warp <= this->_maxWarp && d != this->_location && this->core && this->core->checkReactor()->isStable())
        val = true;
    else
        val = false;
    if (val)
        this->_location = d;
    return val;
}

bool Federation::Starfleet::Ship::move(int warp)
{
    bool val;

    if (warp <= this->_maxWarp && this->core && this->core->checkReactor()->isStable())
        val = true;
    else
        val = false;
    if (val)
        this->_location = this->_home;
    return val;
}

bool Federation::Starfleet::Ship::move(Destination d)
{
    bool val;

    if (d != this->_location && this->core && this->core->checkReactor()->isStable())
        val = true;
    else
        val = false;
    if (val)
        this->_location = d;
    return val;
}

bool Federation::Starfleet::Ship::move()
{
    bool val;

    if (this->core && this->core->checkReactor()->isStable())
        val = true;
    else
        val = false;
    if (val)
        this->_location = this->_home;
    return val;
}

void Federation::Starfleet::Ship::fire(Borg::Ship *target)
{
    int shield = 0;

    if (this->_photonTorpedo < 1) {
        std::cout << this->_name << ": No enough torpedoes to fire, " << this->captain->getName() << "!" << std::endl;
        return;
    }
    this->_photonTorpedo -= 1;
    shield = target->getShield();
    shield -= 50;
    target->setShield(shield);
    std::cout << this->_name << ": Firing on target. " << this->_photonTorpedo << " torpedoes remaining." << std::endl;
}

void Federation::Starfleet::Ship::fire(int torpedoes, Borg::Ship *target)
{
    int shield = 0;

    if (this->_photonTorpedo < torpedoes) {
        std::cout << this->_name << ": No enough torpedoes to fire, " << this->captain->getName() << "!" << std::endl;
        return;
    }
    this->_photonTorpedo -= torpedoes;
    if (this->_photonTorpedo < 1)
        std::cout << this->_name << ": No more torpedo to fire, " << this->captain->getName() << "!" << std::endl;
    shield = target->getShield();
    shield -= 50 * torpedoes;
    target->setShield(shield);
    std::cout << this->_name << ": Firing on target. " << this->_photonTorpedo << " torpedoes remaining." << std::endl;
}

Federation::Ship::Ship(int length, int width, std::string name)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = 1;
    this->_location = this->_home;
    std::cout << "The independent ship " << name << " just finished its construction." << std::endl;
    std::cout << "It is " << length << " m in length and " << width << " m in width." << std::endl;
}

Federation::Ship::~Ship()
{
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
    this->core = core;
    std::cout << this->_name << ": The core is set." << std::endl;
}

void Federation::Ship::checkCore()
{
    if (this->core && this->core->checkReactor()->isStable())
        std::cout << this->_name << ": The core is stable at the time." << std::endl;
    else if (this->core && !this->core->checkReactor()->isStable())
        std::cout << this->_name << ": The core is unstable at the time." << std::endl;
}

bool Federation::Ship::move(int warp, Destination d)
{
    bool val;

    if (warp <= this->_maxWarp && d != this->_location && this->core && this->core->checkReactor()->isStable())
        val = true;
    else
        val = false;
    if (val)
        this->_location = d;
    return val;
}

bool Federation::Ship::move(int warp)
{
    bool val;

    if (warp <= this->_maxWarp && this->core && this->core->checkReactor()->isStable())
        val = true;
    else
        val = false;
    if (val)
        this->_location = this->_home;
    return val;
}

bool Federation::Ship::move(Destination d)
{
    bool val;

    if (d != this->_location && this->core && this->core->checkReactor()->isStable())
        val = true;
    else
        val = false;
    if (val)
        this->_location = d;
    return val;
}

bool Federation::Ship::move()
{
    bool val;

    if (this->core && this->core->checkReactor()->isStable())
        val = true;
    else
        val = false;
    if (val)
        this->_location = this->_home;
    return val;
}

WarpSystem::Core * Federation::Ship::getCore()
{
    return this->core;
}

Federation::Starfleet::Captain::Captain(std::string name)
{
    this->_name = name;
    this->_age = 0;
}

Federation::Starfleet::Captain::~Captain()
{
}

std::string Federation::Starfleet::Captain::getName()
{
    return this->_name;
}

void Federation::Starfleet::Captain::setAge(int age)
{
    this->_age = age;
}

int Federation::Starfleet::Captain::getAge()
{
    return this->_age;
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
    this->_name = name;
    std::cout << "Ensign " << name << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ensign::~Ensign()
{
}