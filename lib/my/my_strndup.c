/*
** EPITECH PROJECT, 2019
** my_strndup.c
** File description:
** my_strndup.c
*/

#include "../../include/my.h"

char *my_strndup(char *str, int nb)
{
    char *ret = my_malloc(sizeof(char) * (nb + 1));
    int i = 0;

    for (; str[i] != 0 && i < nb; i++)
        ret[i] = str[i];
    ret[i] = 0;
    return (ret);
}