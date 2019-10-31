/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** my_strcat.c
*/

#include "my.h"

char *my_strcat(char *str1, char *str2)
{
    char *ret;
    int size_ret;
    int size_str1 = 0;
    int size_str2 = 0;
    int save = 0;

    for (; str1[size_str1] != 0; size_str1++);
    for (; str2[size_str2] != 0; size_str2++);
    size_ret = size_str1 + size_str2 + 1;
    ret = malloc(sizeof(char) * size_ret);
    for (; str1[save] != 0; save++)
        ret[save] = str1[save];
    for (size_str2 = 0; str2[size_str2] != 0; size_str2++, save++)
        ret[save] = str2[size_str2];
    ret[save] = 0;
    return (ret);
}