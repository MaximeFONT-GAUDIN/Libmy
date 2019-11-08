/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** my_revstr.C
*/

#include "my.h"

char *my_revstr(char *str)
{
    int size = my_strlen(str) - 1;
    char c;

    for (int i = 0; i < size; i++) {
        c = str[i];
        str[i] = str[size];
        str[size] = c;
        size--;
    }

    return (str);
}