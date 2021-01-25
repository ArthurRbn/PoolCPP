/*
** EPITECH PROJECT, 2021
** func_ptr
** File description:
** func_ptr
*/

#include <stdio.h>
#include <string.h>
#include "func_ptr.h"

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    if (!str)
        return;
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void print_upper(const char *str)
{
    char c = 0;

    for (int i = 0; i < strlen(str); i++) {
        c =  96 < str[i] && str[i] < 123 ? str[i] - 32 : str[i];
        printf("%c", c);
    }
    printf("\n");
}

void print_42(const char *str)
{
    printf("42\n");
}

void do_action(action_t action, const char *str)
{
    void (*func_ptr[])(const char *str) = {*print_normal, *print_reverse,
    *print_upper, *print_42};
    func_ptr[action](str);
}