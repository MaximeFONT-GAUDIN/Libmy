/*
** EPITECH PROJECT, 2019
** my_str_isalpha.c
** File description:
** my_str_isalpha.c
*/

#include "../../include/my.h"

int my_str_isalpha(char *str)
{
    if (str[0] == 0 || str == NULL)
        return (1);
    for (int i = 0; str[i] != 0; i++)
        if (my_alphaisalpha(str[i]) == 1)
            return (0);
    return (1);
}