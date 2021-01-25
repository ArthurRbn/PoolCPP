/*
 * File: main.cpp
 * File Created: Friday, 22nd January 2021 11:52:16 pm
 * Author: Jean-Baptiste Roesch (jean-baptiste.roesch@epitech.eu)
 * -----
 * Last Modified: Sunday, 24th January 2021 2:58:15 am
 * Modified By: Jean-Baptiste Roesch (jean-baptiste.roesch@epitech.eu)
 * -----
 * Copyright - 2021 Jean-Baptiste Roesch
 */

#include <iostream>
#include "ncurses/Ncurses.hpp"
#include "SFML/Sfml.hpp"

void launch_ncurses()
{
    DisplayNcurses ncurses;
    ncurses.launch();
    return;
}

void launch_sfml()
{
    Sfml sflm;
    sflm.mainWindow();
    return;
}

int main(int ac, char **av)
{
    std::string option = "";
    
    if (av[1])
        option = av[1];
    if (ac < 2 || (av[1] && option == "-text"))
        launch_ncurses();
    else if (ac == 2 && option == "-graphic")
        launch_sfml();
    else if (ac == 2 && option == "--help") {
        std::cout << "Usage : ./MyGKrellm (-text/-graphic)." << std::endl;
        std::cout << "Press crosses to remove modules.";
        std::cout << "'a', 'z', 'e', 'r', 't', 'y' to generate modules.";
        return 0;
    }
    else {
        std::cerr << "Usage : ./MyGKrellm (-text/-graphic)." << std::endl;
        std::cerr << "Press crosses to remove modules.";
        std::cerr << "'a', 'z', 'e', 'r', 't', 'y' to generate modules.";
        return 1;
    }
    return 0;
}