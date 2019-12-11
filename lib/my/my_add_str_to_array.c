/*
** EPITECH PROJECT, 2019
** my_add_str_to_array.c
** File description:
** my_add_str_to_array.c
*/

#include "../../include/my.h"

int my_strlen_tab(char **array)
{
    int i = 0;

    for(; array[i] != NULL; i++);
    return (i);
}

char **my_add_str_to_array(char **array, char *str)
{
    int size_tab = my_strlen_tab(array);
    char **ret = my_malloc(sizeof(char *) * (size_tab + 2));

    for (int i = 0; array[i] != NULL; i++) {
        ret[i] = my_strdup(array[i]);
    }
    ret[size_tab] = my_strdup(str);
    ret[size_tab + 1] = NULL;
    return (ret);
}