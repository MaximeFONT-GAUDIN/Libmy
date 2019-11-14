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

    if (nb <= 0) {
        for (int j = 0; str2[j] != 0; j++)
            str2[j] = 0;
        return (str2);
    }
    for (;str1[i] != 0 && i < nb; i++) {
        str2[i] = str1[i];
    }
    if (my_strlen(str1) < nb) {
        str2[i] = 0;
    }
    return (str2);
}