/*
** EPITECH PROJECT, 2021
** div
** File description:
** div
*/

#include <stddef.h>
#include "castmania.h"

int integer_div(int a, int b)
{
    int res = 0;

    if (a == 0 || b == 0)
        return 0;
    res = a / b;
    return res;
}

float decimale_div(int a, int b)
{
    float res = 0;

    if (a == 0 || b == 0)
        return 0;
    res = a / b;
    return res;
}

void exec_div(division_t *operation)
{
    integer_op_t *integer = NULL;
    decimale_op_t *decimale = NULL;

    if (operation->div_type == INTEGER) {
        integer = operation->div_op;
        integer->res = integer_div(integer->a, integer->b);
    } else if (operation->div_type == DECIMALE) {
        decimale = operation->div_op;
        decimale->res = integer_div(decimale->a, decimale->b);
    }
}
