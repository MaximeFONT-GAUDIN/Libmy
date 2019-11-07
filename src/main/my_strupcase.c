/*
** EPITECH PROJECT, 2019
** my_strupcase.c
** File description:
** my_strupcase.c
*/

#include "my.h"

char *my_strupcase(char *str)
{
    char *ret = malloc(sizeof(char) * (my_strlen(str) + 1));

    for (int i = 0; str[i] != 0; i++) {
        if (i == 0 && my_alphaislower(str[i]) == 0) {
            ret[i] = str[i] - 32;
            continue;
        }
        if ((str[i] >= 97 && str[i] <= 122) && my_alphaisalpha(str[i]) == 0) {
            ret[i] = str[i] - 32;
            continue;
        }
        ret[i] = str[i];
    }
    ret[my_strlen(str)] = 0;
    return (ret);
}
