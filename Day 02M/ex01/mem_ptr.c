/*
** EPITECH PROJECT, 2021
** mem ptr
** File description:
** mem ptr
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mem_ptr.h"

void add_str(const char *str1, const char *str2, char **res)
{
    int len = strlen(str1) + strlen(str2);
    int i = 0;

    (*res) = malloc(sizeof(char) * (len + 1));
    (*res)[len] = 0;
    while (str1[i] != 0) {
        (*res)[i] = str1[i];
        i++;
    }
    for (int j = 0; str2[j]; ++j) {
        (*res)[i + j] = str2[j];
    }
}

void add_str_struct(str_op_t *str_op)
{
    int len = strlen(str_op->str1) + strlen(str_op->str2);
    int i = 0;

    str_op->res = malloc(sizeof(char) * (len + 1));
    str_op->res[len] = 0;
    while (str_op->str1[i] != 0) {
        str_op->res[i] = str_op->str1[i];
        i++;
    }
    for (int j = 0; str_op->str2[j]; ++j) {
        str_op->res[i + j] = str_op->str2[j];
    }
}