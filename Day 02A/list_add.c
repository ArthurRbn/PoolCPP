/*
** EPITECH PROJECT, 2021
** list add
** File description:
** list add
*/

#include <stddef.h>
#include <stdlib.h>
#include "generic_list.h"

bool list_is_empty(list_t list)
{
    if (list == NULL)
        return true;
    else if (list)
        return false;
}

bool list_add_elem_at_front(list_t *front_ptr, void *elem)
{
    list_t new_node = malloc(sizeof(node_t));

    if (new_node == NULL)
        return false;
    new_node->value = elem;
    new_node->next = NULL;
    if (*front_ptr == NULL) {
        *front_ptr = new_node;
    }
    new_node->next = (*front_ptr)->next;
    *front_ptr = new_node;
    return true;
}

bool list_add_elem_at_back(list_t *front_ptr, void *elem)
{
    list_t new_node = malloc(sizeof(node_t));
    list_t my_list = *front_ptr;

    if (new_node == NULL)
        return false;
    new_node->value = elem;
    new_node->next = NULL;
    if (*front_ptr == NULL) {
        *front_ptr = new_node;
        return true;
    }
    while (my_list->next) {
        my_list = my_list->next;
    }
    my_list->next = new_node;
    return true;
}

int special_list_cases(list_t *front_ptr, void *elem, unsigned int position,
list_t new_node)
{
    if (new_node == NULL || *front_ptr == NULL)
        return false;
    if (position == 0)
        return list_add_elem_at_front(front_ptr, elem);
    else if (position == list_get_size(*front_ptr))
        return list_add_elem_at_back(front_ptr, elem);
    if (position > list_get_size(*front_ptr))
        return false;
    return 10;
}

bool list_add_elem_at_position(list_t *front_ptr, void *elem, unsigned int pos)
{
    list_t new_node = malloc(sizeof(node_t));
    list_t my_list = *front_ptr;
    int cases = 10;

    cases = special_list_cases(front_ptr, elem, pos, new_node);
    if (cases != 10)
        return cases;
    for (int i = 1; my_list && i < pos - 1; my_list = my_list->next, i++);
    if (my_list == NULL)
        return false;
    new_node->value = elem;
    new_node->next = my_list->next;
    my_list->next = new_node;
    return true;
}
