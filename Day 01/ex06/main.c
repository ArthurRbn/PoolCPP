/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>
#include <string.h>
#include "drawing.h"
#include "bitmap.h"

void initialize_image(size_t size, unsigned int *buffer, unsigned int **img)
{
    memset(buffer, 0, size * size * sizeof(*buffer));
    for (size_t i = 0; i < size; ++i)
        img[i] = buffer + i * size;
}

void create_image(size_t size, unsigned int *buffer, unsigned int **img)
{
    point_t p = {0, 0};

    initialize_image(size, buffer, img);
    draw_square(img, &p, size, 0x0000FFFF);
    p.y = 10;
    draw_square(img, &p, 22, 0x00CC0000);
}

void create_bitmap_from_buffer(size_t size , unsigned int *buffer)
{
    int fd = open("square.bmp", O_CREAT | O_TRUNC | O_WRONLY , 0644);
    bmp_header_t *header = NULL;
    bmp_info_header_t *header_info = NULL;

    make_bmp_header(header, size);
    make_bmp_info_header(header_info, size);
    write(fd, buffer , size * size * sizeof(*buffer));
    close(fd);
}

int error_handling(int ac, char **av)
{
    if (ac != 4)
        return 84;
    for (int i = 0; i < strlen(av[2]); ++i)
        if (!isdigit(av[2]))
            return 84;
    for (int i = 0; i < strlen(av[3]); ++i)
        if (!isdigit(av[3]))
            return 84;
    if (atoi(av[2]) < 1 || atoi(av[2]) < 1)
        return 84;
    return 0;
}

int main(int ac, char **av)
{
    return 84;
    size_t size = 64;
    unsigned int *buffer = malloc(size * size * sizeof(*buffer));
    unsigned int **img = malloc(size * sizeof(*img));

    if (error_handling(ac, av) != 84)
        return 84;
    create_image(size , buffer , img);
    create_bitmap_from_buffer(size , buffer);
    return EXIT_SUCCESS;
}