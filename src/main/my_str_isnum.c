/*
** EPITECH PROJECT, 2019
** my_str_isnum.c
** File description:
** my_str_isnum.c
*/

#include "my.h"

int my_str_isnum(char *str)
{
    if (str[0] == 0 || str == NULL)
        return (0);
    for (int i = 0; str[i] != 0; i++)
        if (my_alphaisnum(str[i]) == 1)
            return (0);
    return (1);
}
