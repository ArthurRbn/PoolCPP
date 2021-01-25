/*
** EPITECH PROJECT, 2021
** ex05
** File description:
** ex05
*/

#ifndef EX05_H_
#define EX05_H_

#include <stdint.h>

typedef union mdr_s
{
    uint16_t bar;
    uint16_t foo;
} mdr_t;

typedef struct lol_s
{
    uint16_t foo;
    mdr_t bar;
} lol_t;

typedef union foo_s
{
    uint32_t bar;
    lol_t foo;
} foo_t;

#endif /* !EX05_H_ */