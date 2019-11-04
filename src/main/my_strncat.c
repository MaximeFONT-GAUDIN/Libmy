/*
** EPITECH PROJECT, 2019
** my_strncat.c
** File description:
** my_strncat.c
*/

#include "my.h"

char *my_strncat(char *src, char *dest, int n)
{
    int size_src = 0;
    char *ret;

    for (;src[size_src] != 0; size_src++);
    ret = malloc(sizeof(char) * (size_src + n) + 1);
    for (int i = 0; src[i] != 0; i++)
        ret[i] = src[i];
    for (int i = 0; i != n; i++) {
        ret[size_src] = dest[i];
        size_src++;
    }
    ret[size_src] = 0;
    return (ret);
}