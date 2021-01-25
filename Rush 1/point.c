/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include <stdlib.h>
#include "new.h"
#include "point.h"

typedef struct
{
    Class   base;
    int     x, y;
}   PointClass;

static void point_ctor(PointClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static char *point_str(PointClass *this)
{
    char *buffer = malloc(1024);

    if (buffer == NULL) {
        raise("Could not allocate string buffer.");
    }
    snprintf(buffer, 1024, "<Point (%d, %d)>", this->x, this->y);
    return (buffer);
}

static Object *point_add(PointClass *a, PointClass *b)
{
    return (new(Point, a->x + b->x, a->y + b->y));
}

static Object *point_sub(PointClass *a, PointClass *b)
{
    return (new(Point, a->x - b->x, a->y - b->y));
}

static const PointClass _description = {
    {
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&point_ctor,
        .__dtor__ = NULL,
        .__str__ = (to_string_t)&point_str,
        .__add__ = (binary_operator_t)&point_add,
        .__sub__ = (binary_operator_t)&point_sub,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0
};

const Class *Point = (const Class *)&_description;
