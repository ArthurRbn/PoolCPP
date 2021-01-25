/*
** EPITECH PROJECT, 2021
** pyramid
** File description:
** pyramid
*/

#include <stdio.h>

int find_path(int x, int y, int **map, int size)
{
    int distance = map[x][y];
    int distance_1 = 0;
    int distance_2 = 0;

    if (x < size - 1) {
        distance_1 = find_path(x + 1, y, map, size);
        distance_2 = find_path(x + 1, y + 1, map, size);
    }
    if (distance_1 < distance_2) {
        return distance + distance_1;
    } else {
        return distance + distance_2;
    }
}

int pyramid_path(int size, const int **map)
{
    int distance = map[0][0];

    distance = find_path(0, 0, map, size);
    return distance;
}