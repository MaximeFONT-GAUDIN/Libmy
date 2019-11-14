/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** my_strcat.c
*/

#include "../../include/my.h"

char *my_strcat(char *str1, char *str2)
{
    int size_str1 = my_strlen(str1);

    for (int i = 0; str2[i] != 0; i++) {
        str1[size_str1] = str2[i];
        size_str1++;
    }
    str1[size_str1] = 0;
    return (str1);
}