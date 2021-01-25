/*
** EPITECH PROJECT, 2021
** tab_to_2dtab
** File description:
** tab_to_2Dtab
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int x = 0;
    int y = 0;

    (*res) = malloc(sizeof(int *) * (length + 1));
    if ((*res) == NULL)
        return;
    for (int i = 0; i < length; ++i) {
        (*res)[i] = malloc(sizeof(int) * (width + 1));
        if ((*res)[i] == NULL)
            return;
        (*res)[i][width] = NULL;
    }
    (*res)[length] = NULL;
    for (int i = 0; i < length * width; ++i) {
        (*res)[x][y++] = tab[i];
        if (y != 0 && y % width == 0) {
            y = 0;
            ++x;
        }
    }
}