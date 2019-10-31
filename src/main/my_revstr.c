/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** my_revstr.C
*/

#include "my.h"

char *my_revstr(char *str)
{
    int size_str = 0;
    char *ret;
    int i = 0;

    for (; str[size_str] != 0; size_str++);
    ret = malloc(sizeof(char) * size_str + 1);
    size_str--;
    for (; str[i] != 0; i++) {
        ret[i] = str[size_str];
        size_str--;
    }
    ret[i] = 0;
    return (ret);
}