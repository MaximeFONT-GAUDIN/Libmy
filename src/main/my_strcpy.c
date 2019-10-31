/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** my_strcpy.c
*/

#include "my.h"

char *my_strcpy(char *str1, char *str2)
{
    int i = 0;

    for (; str1[i] != 0; i++)
        str2[i] = str1[i];
    str2[i] = 0;
    return (str2);
}