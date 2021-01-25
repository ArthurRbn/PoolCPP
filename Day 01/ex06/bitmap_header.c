/*
** EPITECH PROJECT, 2021
** bitmap header
** File description:
** bitmap header
*/

#include <stddef.h>
#include "bitmap.h"

void make_bmp_header(bmp_header_t *header, size_t size)
{
    header->magic = 0x4D42;
    header->_app1 = 0;
    header->_app2 = 0;
    header->size = size * size * 4 + 54;
    header->offset = 54;
}

void make_bmp_info_header(bmp_info_header_t *header, size_t size)
{
    header->bpp = 32;
    header->compression = 0;
    header->h_resolution = 0;
    header->v_resolution = 0;
    header->important_colors = 0;
    header->palette_size = 0;
    header->planes = 1;
    header->height = size;
    header->width = size;
    header->raw_data_size = size * size * 4;
    header->size = 40;
}