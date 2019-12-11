/*
** EPITECH PROJECT, 2019
** my_str_isprintable.c
** File description:
** my_str_isprintable.c
*/

#include "../../include/my.h"

int my_str_isprintable(char *str)
{
    if (str == NULL)
        return (0);
    if (str[0] == 0)
        return (1);
    for (int i = 0; str[i] != 0; i++)
        if (my_alphaisprint(str[i]) == 1)
            return (0);
    return (1);
}
