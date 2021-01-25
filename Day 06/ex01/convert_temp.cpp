/*
** EPITECH PROJECT, 2021
** day
** File description:
** Exercice 1
*/

#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    std::string input;
    float temp;

    std::cout.precision(3);
    while (std::cin) {
        std::cin >> temp;
        std::cin >> input;
        if (input.compare("Fahrenheit") == 0) {
            temp = 5.0 / 9.0 * (temp - 32);
            std::cout << std::setw(16) << std::fixed << temp << std::setw(16) << std::fixed << "Celsius" <<std::endl;
        } else if (input.compare("Celsius") == 0) {
            temp = temp * 9.0 / 5.0 + 32;
            std::cout << std::setw(16) << std::fixed << temp << std::setw(16) << std::fixed << "Fahrenheit" << std::endl;
        }
        input.clear();
    }
    return 0;
}