/*
** EPITECH PROJECT, 2021
** drawing functions
** File description:
** drawing functions
*/

#include <stdint.h>
#include <stddef.h>
#include "bitmap.h"
#include "drawing.h"

void draw_square(uint32_t **img, const point_t *origin, size_t size,
uint32_t color)
{
    for (int i = size; i > 0; --i) {
        for (int j = 0; size > j; ++j) {
            img[origin->x - i][origin->y + j] = color;
        }
    }
}