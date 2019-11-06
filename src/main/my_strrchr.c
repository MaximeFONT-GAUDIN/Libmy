/*
** EPITECH PROJECT, 2019
** my_strrchr.c
** File description:
** my_strrchr.c
*/

#include "my.h"

char *my_strrchr(char *str, char c)
{
    char *ret = NULL;
    int i = 0;

    for (;str[i] != 0; i++);
    for (; i != 0; i--) {
        if (str[i] == c) {
            ret = str + i;
            return (ret);
        }
    }
    if (c == str[0])
        return (str);
    return (NULL);
}