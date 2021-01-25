/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include <stdlib.h>
#include "vertex.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x, y, z;
}   VertexClass;

static void vertex_ctor(VertexClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
}

static char *vertex_str(VertexClass *this)
{
    char *buffer = malloc(1024);

    if (buffer == NULL) {
        raise("Could not allocate string buffer.");
    }
    snprintf(buffer, 1024, "<Vertex (%d, %d, %d)>", this->x, this->y, this->z);
    return (buffer);
}

static Object *vertex_add(VertexClass *a, VertexClass *b)
{
    return (new(Vertex, a->x + b->x, a->y + b->y, a->z + b->z));
}

static Object *vertex_sub(VertexClass *a, VertexClass *b)
{
    return (new(Vertex, a->x - b->x, a->y - b->y, a->z - b->z));
}

static const VertexClass _description = {
    {
        .__size__ = sizeof(VertexClass),
        .__name__ = "Vertex",
        .__ctor__ = (ctor_t)&vertex_ctor,
        .__dtor__ = NULL,
        .__str__ = (to_string_t)&vertex_str,
        .__add__ = (binary_operator_t)&vertex_add,
        .__sub__ = (binary_operator_t)&vertex_sub,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0,
    .z = 0
};

const Class *Vertex = (const Class *)&_description;
