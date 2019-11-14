/*
** EPITECH PROJECT, 2019
** my_strlowcase.c
** File description:
** my_strlowcase.c
*/

#include "../../include/my.h"

char *my_strlowcase(char *str)
{
    // char *ret = malloc(sizeof(char) * (my_strlen(str) + 1));

    for (int i = 0; str[i] != 0; i++) {
        if (i == 0 && my_alphaisupper(str[i]) == 0) {
            str[i] = str[i] + 32;
            continue;
        }
        if ((str[i] >= 65 && str[i] <= 90) && my_alphaisalpha(str[i]) == 0) {
            str[i] = str[i] + 32;
            continue;
        }
        // ret[i] = str[i];
    }
    // ret[my_strlen(str)] = 0;
    return (str);
}