/*
** EPITECH PROJECT, 2019
** my_strchr.c
** File description:
** my_strchr.c
*/

#include "../../include/my.h"

char *my_strchr(char *str, char c)
{
    char *ret = NULL;

    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == c) {
            ret = str + i;
            return (ret);
        }
    }
    return (NULL);
}