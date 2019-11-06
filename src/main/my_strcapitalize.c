/*
** EPITECH PROJECT, 2019
** my_strcapitalize.c
** File description:
** my_strcapitalize.c
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    char *ret = malloc(sizeof(char) * (my_strlen(str) + 1));

    for (int i = 0; str[i] != 0; i++) {
        if (i == 0 && my_alphaislower(str[i]) == 0) {
            ret[i] = str[i] - 32;
            continue;
        }
        if ((str[i] >= 97 && str[i] <= 122) && my_alphaisalpha(str[i - 1]) == 1) {
            ret[i] = str[i] - 32;
            continue;
        }
        ret[i] = str[i];
    }
    ret[my_strlen(str)] = 0;
    return (ret);
}