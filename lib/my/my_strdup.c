/*
** EPITECH PROJECT, 2019
** my_strdup.c
** File description:
** my_strdup.c
*/

#include "../../include/my.h"

char *my_strdup(char *str)
{
    int size = my_strlen(str);
    char *ret = my_malloc(sizeof(char) * (size + 1));

    if (ret == NULL) { 
        errno = ENOMEM;
        return (NULL);
    }
    for (int i = 0; str[i] != 0; i++) {
        ret[i] = str[i];
    }
    ret[size] = 0;
    return (ret);
}