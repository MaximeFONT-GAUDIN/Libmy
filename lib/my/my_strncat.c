/*
** EPITECH PROJECT, 2019
** my_strncat.c
** File description:
** my_strncat.c
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char *src, int n)
{
    int size_dest = 0;

    for (; dest[size_dest] != 0; size_dest++);
    for (int i = 0; i != n; i++) {
        dest[size_dest] = src[i];
        size_dest++;
    }
    dest[size_dest] = 0;
    return (dest);
}