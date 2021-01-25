/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include <stdlib.h>
#include "new.h"
#include "int.h"

typedef struct
{
    Class   base;
    int     x;
}   IntClass;

static void int_ctor(IntClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
}

static char *int_str(IntClass *this)
{
    char *buffer = malloc(1024);

    if (buffer == NULL) {
        raise("Could not allocate string buffer.");
    }
    snprintf(buffer, 1024, "<Int (%d)>", this->x);
    return (buffer);
}

static Object *int_add(IntClass *a, IntClass *b)
{
    return (new(Int, a->x + b->x));
}

static Object *int_sub(IntClass *a, IntClass *b)
{
    return (new(Int, a->x - b->x));
}

static Object *int_mul(IntClass *a, IntClass *b)
{
    return (new(Int, a->x * b->x));
}

static Object *int_div(IntClass *a, IntClass *b)
{
    return (new(Int, a->x / b->x));
}

static bool int_eq(IntClass *a, IntClass *b)
{
    return (a->x == b->x);
}

static bool int_gt(IntClass *a, IntClass *b)
{
    return (a->x > b->x);
}

static bool int_lt(IntClass *a, IntClass *b)
{
    return (a->x < b->x);
}

static const IntClass _description = {
    {
        .__size__ = sizeof(IntClass),
        .__name__ = "Int",
        .__ctor__ = (ctor_t)&int_ctor,
        .__dtor__ = NULL,
        .__str__ = (to_string_t)&int_str,
        .__add__ = (binary_operator_t)&int_add,
        .__sub__ = (binary_operator_t)&int_sub,
        .__mul__ = (binary_operator_t)&int_mul,
        .__div__ = (binary_operator_t)&int_div,
        .__eq__ = (binary_comparator_t)&int_eq,
        .__gt__ = (binary_comparator_t)&int_gt,
        .__lt__ = (binary_comparator_t)&int_lt
    },
    .x = 0
};

const Class *Int = (const Class *)&_description;
