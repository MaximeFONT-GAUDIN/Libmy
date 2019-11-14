/*
** EPITECH PROJECT, 2019
** my_strupcase.c
** File description:
** my_strupcase.c
*/

#include "../../include/my.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != 0; i++) {
        if (i == 0 && my_alphaislower(str[i]) == 0) {
            str[i] = str[i] - 32;
            continue;
        }
        if ((str[i] >= 97 && str[i] <= 122) && my_alphaisalpha(str[i]) == 0) {
            str[i] = str[i] - 32;
            continue;
        }
    }
    return (str);
}