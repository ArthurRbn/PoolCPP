/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPrush2_nicolas_schneider
** File description:
** Created by arthur,
*/

#include <iostream>
#include "SantaClaus.hpp"

int main(int ac, char **av)
{
    SantaClaus warp_machine;

    if (ac < 2) {
        std::cout << "Usage: ./santa -w" << std::endl;
        return 84;
    } else {
        std::cout << "Here is your magical number: " << PORT << std::endl;
        warp_machine.initSock();
        warp_machine.magicalSock();
        std::cout << "Sock closed" << std::endl;
        return 0;
    }
}