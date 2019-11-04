/*
** EPITECH PROJECT, 2019
** my_strncmp.c
** File description:
** my_strncmp.c
*/

#include "my.h"

int my_strncmp(char *str1, char *str2, int n)
{
    int i = 0;

    n = n - 1;
    for (; i <= n; i++) {
        if (str1[i] < str2[i])
            return (1);
        if (str1[i] == 0 && str2[i] != 0)
            return (1);
        if (str2[i] == 0 && str1[i] != 0)
            return (1);
    }
    return (0);
}