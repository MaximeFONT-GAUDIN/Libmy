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

    if (nb > 0) {
        for (; str1[i] != 0 && i < nb; i++) {
            str2[i] = str1[i];
        }
        for (; i < nb; i++) {
            str2[i] = 0;
        }
    }
    return (str2);
}