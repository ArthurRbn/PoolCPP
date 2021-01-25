/*
** EPITECH PROJECT, 2021
** get list values
** File description:
** get list values
*/

#include <stddef.h>
#include "double_list.h"

double double_list_get_elem_at_front(double_list_t list)
{
    if (list == NULL)
        return 0;
    return list->value;
}

double double_list_get_elem_at_back(double_list_t list)
{
    double_list_t my_list = list;

    if (list == NULL)
        return 0;
    while (my_list->next) {
        my_list = my_list->next;
    }
    return my_list->value;
}

double double_list_get_elem_at_position(double_list_t list,
unsigned int position)
{
    double_list_t my_list = list;

    if (list == NULL || position > double_list_get_size(list))
        return 0;
    for (int i = 0; my_list && i < position; my_list = my_list->next, i++);
    if (my_list == NULL)
        return false;
    return my_list->value;
}

doublelist_node_t *double_list_get_first_node_with_value(double_list_t list,
double value)
{
    double_list_t my_list = list;

    if (list == NULL)
        return NULL;
    for (; my_list && my_list->value != value; my_list = my_list->next);
    return my_list;
}