/*
** EPITECH PROJECT, 2021
** string join
** File description:
** string join
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

void join_c(string_t *this, char delim, const char *const *tab)
{
    char *str = malloc(sizeof(char) * 2);

    if (str == NULL)
        return;
    str[0] = delim;
    str[1] = '\0';
    for (int i = 0; tab[i]; ++i) {
        this->append_c(this, tab[i]);
        if (tab[i + 1] != NULL)
            this->append_c(this, str);
    }
    free(str);
}

void join_s(string_t *this, char delim, const string_t *const *tab)
{
    char *str = malloc(sizeof(char) * 2);

    if (str == NULL)
        return;
    str[0] = delim;
    str[1] = '\0';
    for (int i = 0; tab[i] && !tab[i]->empty(tab[i]); ++i) {
        this->append_c(this, tab[i]->str);
        if (tab[i + 1] != NULL && !tab[i + 1]->empty(tab[i + 1]))
            this->append_c(this, str);
    }
    free(str);
}