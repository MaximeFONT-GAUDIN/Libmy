/*
** EPITECH PROJECT, 2019
** my_strtowordarray.c
** File description:
** my_strtowordarray.c
*/

#include "../../include/my.h"

int it_is_separator(char c, char *separator)
{
    for (int i = 0; separator[i] != 0; i++)
        if (c == separator[i])
            return (1);
    return (0);
}

int how_many_array(char *str, char *separator)
{
    int sep = 0;
    int j = 0;
    int i = 0;

    while (it_is_separator(str[i], separator) != 0)
        i++;
    for (; str[i] != 0; i++) {
        if (it_is_separator(str[i], separator) != 0) {
            sep++;
        }
        while (it_is_separator(str[i], separator) != 0 && str[i] != 0)
            i++;
    }
    for (; str[j] != 0; j++);
    if (it_is_separator(str[j - 1], separator) == 1)
        sep--;
    return (sep);
}

char **my_strtowordarray(char *str, char *separator)
{
    char **ret;
    int p = 0;
    int malloc_the_array = 0;
    int j = 0;

    ret = malloc(sizeof(char *) * (how_many_array(str, separator) + 2));
    for (; it_is_separator(str[p], separator) == 1; p++);
    for (int i = 0; i != how_many_array(str, separator) + 1; i++) {
        for (malloc_the_array = 0; it_is_separator(str[p], separator) == 0 && str[p] != 0; p++, malloc_the_array++);
        ret[i] = malloc(sizeof(char) * (malloc_the_array + 1));
        for (; it_is_separator(str[p], separator) == 1; p++);
    }
    for (p = 0; it_is_separator(str[p], separator) == 1; p++);
    for (int i = 0; i != (how_many_array(str, separator) + 1); i++) {
        for (j = 0; str[p] != 0 && it_is_separator(str[p], separator) == 0; p++, j++)
            ret[i][j] = str[p];
        ret[i][j] = 0;
        for (; it_is_separator(str[p], separator) == 1; p++);
    }
    ret[how_many_array(str, separator) + 1] = NULL;
    return (ret);
}