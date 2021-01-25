/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include <stdlib.h>
#include "new.h"
#include "float.h"

typedef struct
{
    Class   base;
    float     x;
}   FloatClass;

static void float_ctor(FloatClass *this, va_list *args)
{
    this->x = va_arg(*args, double);
}

static char *float_str(FloatClass *this)
{
    char *buffer = malloc(1024);

    if (buffer == NULL) {
        raise("Could not allocate string buffer.");
    }
    snprintf(buffer, 1024, "<Float (%f)>", this->x);
    return (buffer);
}

static Object *float_add(FloatClass *a, FloatClass *b)
{
    return (new(Float, a->x + b->x));
}

static Object *float_sub(FloatClass *a, FloatClass *b)
{
    return (new(Float, a->x - b->x));
}

static Object *float_mul(FloatClass *a, FloatClass *b)
{
    return (new(Float, a->x * b->x));
}

static Object *float_div(FloatClass *a, FloatClass *b)
{
    return (new(Float, a->x / b->x));
}

static bool float_eq(FloatClass *a, FloatClass *b)
{
    return (a->x == b->x);
}

static bool float_gt(FloatClass *a, FloatClass *b)
{
    return (a->x > b->x);
}

static bool float_lt(FloatClass *a, FloatClass *b)
{
    return (a->x < b->x);
}

static const FloatClass _description = {
    {
        .__size__ = sizeof(FloatClass),
        .__name__ = "Float",
        .__ctor__ = (ctor_t)&float_ctor,
        .__dtor__ = NULL,
        .__str__ = (to_string_t)&float_str,
        .__add__ = (binary_operator_t)&float_add,
        .__sub__ = (binary_operator_t)&float_sub,
        .__mul__ = (binary_operator_t)&float_mul,
        .__div__ = (binary_operator_t)&float_div,
        .__eq__ = (binary_comparator_t)&float_eq,
        .__gt__ = (binary_comparator_t)&float_gt,
        .__lt__ = (binary_comparator_t)&float_lt
    },
    .x = 0
};

const Class *Float = (const Class *)&_description;
