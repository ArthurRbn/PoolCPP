/*
** EPITECH PROJECT, 2021
** string split
** File description:
** string split
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

int count_split(char *str, char separator)
{
    int pieces = 0;

    for (int i = 0; str[i] != 0; i++)
        if (str[i] == separator)
            pieces++;
    pieces += 2;
    return pieces;
}

void get_last_piece(const string_t *this, char **to_fill, int i, int mark)
{
    (*to_fill) = malloc(sizeof(char) * (i - mark));
    this->copy(this, (*to_fill), (i - mark - 1), mark + 1);
    (*to_fill)[i - mark - 1] = 0;
}

char **split_c(const string_t *this, char separator)
{
    char **tab = NULL;
    int pieces = count_split(this->str, separator);
    int cnt = 0;
    int mark = -1;
    int i = 0;

    tab = malloc(sizeof(char *) * pieces);
    for (i = 0; this->str[i]; ++i) {
        if (this->str[i] == separator) {
            tab[cnt] = malloc(sizeof(char) * (i - mark));
            this->copy(this, tab[cnt], (i - mark - 1), mark + 1);
            tab[cnt][i - mark - 1] = 0;
            cnt++;
            mark = i;
        }
    }
    get_last_piece(this, &tab[cnt], i, mark);
    tab[pieces - 1] = NULL;
    return (tab);
}

string_t **split_s(const string_t *this, char separator)
{
    char **tab = split_c(this, separator);
    int i = 0;
    string_t **str_tab = NULL;

    for (i = 0; tab[i]; ++i);
    str_tab = malloc(sizeof(string_t *) * (i + 1));
    str_tab[i] = NULL;
    for (int j = 0; tab[j]; ++j) {
        str_tab[j] = malloc(sizeof(string_t));
        string_init(str_tab[j], tab[j]);
    }
    for (int k = 0; tab[k] != 0; ++k)
        free(tab[k]);
    free(tab);
    return str_tab;
}

void print(const string_t *this)
{
    if (this != NULL && this->str != NULL)
        printf("%s", this->str);
}