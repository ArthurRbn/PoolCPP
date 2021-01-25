/*
** EPITECH PROJECT, 2021
** list special
** File description:
** list special
*/

#include <stddef.h>
#include "generic_list.h"

void list_dump(list_t list, value_displayer_t val_disp)
{
    list_t my_list = list;

    if (list == NULL)
        return;
    while (my_list) {
        val_disp(my_list->value);
        my_list = my_list->next;
    }
}

node_t *list_get_first_node_with_value(list_t list, void *value,
value_comparator_t val_comp)
{
    list_t my_list = list;

    if (list == NULL)
        return NULL;
    for (; my_list && val_comp(my_list->value, value) != 0;
    my_list = my_list->next);
    return my_list;
}