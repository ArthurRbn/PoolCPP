/*
** EPITECH PROJECT, 2021
** double list 2
** File description:
** double list 2
*/

#include <stddef.h>
#include <stdlib.h>
#include "double_list.h"

int special_cases(double_list_t *front_ptr, double elem, unsigned int position,
double_list_t new_node)
{
    if (new_node == NULL)
        return false;
    if (position == 0)
        return double_list_add_elem_at_front(front_ptr, elem);
    else if (position == double_list_get_size(*front_ptr))
        return double_list_add_elem_at_back(front_ptr, elem);
    if (position > double_list_get_size(*front_ptr))
        return false;
    return 10;
}

bool double_list_add_elem_at_position(double_list_t *front_ptr, double elem,
unsigned int position)
{
    double_list_t new_node = malloc(sizeof(doublelist_node_t));
    double_list_t my_list = *front_ptr;
    int cases = 10;

    cases = special_cases(front_ptr, elem, position, new_node);
    if (cases != 10 || *front_ptr == NULL)
        return cases;
    for (int i = 1; my_list && i < position - 1; my_list = my_list->next, i++);
    if (my_list == NULL)
        return false;
    new_node->value = elem;
    new_node->next = my_list->next;
    my_list->next = new_node;
    return true;
}