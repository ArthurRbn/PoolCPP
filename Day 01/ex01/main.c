/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menger.h"

int error_handling(int ac, char **av)
{
    if (ac != 3)
        return 84;
    for (int i = 0; i < strlen(av[1]); ++i)
        if (!isdigit(av[1][i]))
            return 84;
    for (int i = 0; i < strlen(av[2]); ++i)
        if (!isdigit(av[2][i]))
            return 84;
    return 0;
}

void process_square(int square, int level)
{
    int subsquare = square / 3;

    menger(square, level - 1, 0, 0);
}

int main(int ac, char **av)
{
    int square = 0;
    int level = 0;

    if (error_handling(ac, av) == 84)
        return 84;
    square = atoi(av[1]);
    level = atoi(av[2]);
    if (square % 3 != 0)
        return 84;
    process_square(square, level);
    return 0;
}