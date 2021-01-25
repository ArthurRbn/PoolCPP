/*
** EPITECH PROJECT, 2021
** cpp_rush1
** File description:
** Exercice 6
*/

#include <stdlib.h>
#include <stdarg.h>
#include "raise.h"
#include "container.h"
#include "list.h"
#include "int.h"
#include "new.h"

int main()
{
    Object *list = new(List, Int);
    int x = 0;

    setitem(list, 0, 15);
    setitem(list, 1, 12);
    setitem(list, 2, 111);
    pushFront(list, 1);
    pushBack(list, 666);
    printList(list);
    printf("lol\n");
    popFront(list);
    popBack(list);
    printList(list);
}
