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
    int difference = 0;

    for (; i != n; i++) {
        difference = str1[i] - str2[i];
        if (difference == 0)
            continue;
        else 
            return (difference);
    }
    return (0);
}