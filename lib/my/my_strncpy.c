/*
** EPITECH PROJECT, 2019
** my_strncpy.c
** File description:
** my_strncpy.c
*/

#include "../../include/my.h"

char *my_strncpy(char *str2, char *str1, int nb)
{
    int i = 0;
    int b = 0;

    if (nb > 0) {
        for (; str1[i] != '\0' && i < nb; i++, b++)
            str2[b] = str1[i];
        for (; b < nb; b++)
            str2[b] = 0;
    }
    return (str2);
}