/*
** EPITECH PROJECT, 2019
** my_strncpy.c
** File description:
** my_strncpy.c
*/

#include "my.h"

char *my_strncpy(char *str1, char *str2, int nb)
{
    int i = 0;

    for (;str1[i] != 0 && i < nb; i++) {
        str2[i] = str1[i];
    }
    if (my_strlen(str1) < nb) {
        str2[i] = 0;
    }
    return (str2);
}