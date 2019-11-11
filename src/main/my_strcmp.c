/*
** EPITECH PROJECT, 2019
** my_strcmp.c
** File description:
** my_strcmp.c
*/

#include "my.h"

int my_strcmp(char *str1, char *str2)
{
    int i = 0;

    for (; str1[i] != 0; i++) {
        if (str1[i] - str2[i] == 0)
            continue;
        if (str1[i] - str2[i] < 0 || str1[i] - str2[i] > 0)
            return (str1[i] - str2[i]);
    }
    if (str1[i] == 0 && str2[i] != 0)
        return (str1[i] - str2[i]);
    return (0);
}