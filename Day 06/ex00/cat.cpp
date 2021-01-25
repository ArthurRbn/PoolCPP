/*
** EPITECH PROJECT, 2021
** day
** File description:
** Exercice 0
*/

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac < 2)
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
    for (int i = 1; av[i]; ++i) {
        std::ifstream f(av[i]);
        if (f.is_open())
            std::cout << f.rdbuf();
        else
            std::cerr << "my_cat: " << av[i] << ": No such file or directory" << std::endl;
    }
    (void)ac;
    return 0;
}