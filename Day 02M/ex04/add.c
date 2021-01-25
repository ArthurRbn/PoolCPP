/*
** EPITECH PROJECT, 2021
** add
** File description:
** add
*/

#include <stddef.h>
#include "castmania.h"

int normal_add(int a, int b)
{
    int res = a + b;

    return res;
}

int absolute_add(int a, int b)
{
    int res = 0;

    a = a < 0 ? a * -1 : a;
    b = b < 0 ? b * -1 : b;
    res = a + b;
    return res;
}

void exec_add(addition_t *operation)
{
    if (operation->add_type == NORMAL) {
        operation->add_op.res = normal_add(operation->add_op.a,
        operation->add_op.b);
    } else if (operation->add_type == ABSOLUTE) {
        operation->add_op.res = absolute_add(operation->add_op.a,
        operation->add_op.b);
    }
}