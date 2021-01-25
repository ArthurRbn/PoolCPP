/*
** EPITECH PROJECT, 2021
** menger
** File description:
** menger
*/

#include <stdio.h>

int menger(int square, int level, int x, int y)
{
    int subsquare = square / 3;
    int calc_x = 0;
    int calc_y = 0;

    printf("%03d %03d %03d\n", subsquare, x + square / 3, y + square / 3);
    for (int i = 0; i < subsquare && i * subsquare < square; ++i) {
        for (int j = 0; j < subsquare && j * subsquare < square; ++j) {
            calc_x = i * subsquare + 1 + x;
            calc_y = j * subsquare + 1 + y;
            if (level > 1 && subsquare >= 3 && (i != 1 || j != 1)) {
                menger(square / 3, level - 1, x + i * subsquare, y + j *
                subsquare);
            } else if ((i != 1 || j != 1) && level >= 1) {
                printf("%03d %03d %03d\n", subsquare / 3, calc_x, calc_y);
            }
        }
    }
}