//
// Created by derazeloic on 1/23/21.
//

#include <iostream>
#include "Sfml.hpp"
#include "../ModuleHandling/IMonitorModule.hpp"

Sfml::Sfml() {
    _mMemory = new ModuleMemory;
    _mCpu = new CPU;
    _mNetwork = new Network;
    _mSystem = new ModuleSystem;
    _mDate = new Date;

    _tDate = new sf::Text;
    _tTime = new sf::Text;

}

Sfml::~Sfml(){



}

void Sfml::mainWindow() {
    Sfml::renderWindow();
    Sfml::getInfo();


    while (_window->isOpen())
    {
        Sfml::getInfo();
        Sfml::GetFrequency();
        Sfml::manageEvents();
        Sfml::displayWindow();
    }
}

sf::RenderWindow *Sfml::getWindow() const {
    return _window;
}

sf::Event *Sfml::getEvent() const {
    return _event;
}


