/*
** EPITECH PROJECT, 2019
** my_strcapitalize.c
** File description:
** my_strcapitalize.c
*/

#include "../../include/my.h"

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != 0; i++) {
        if (i == 0 && my_alphaislower(str[i]) == 0) {
            str[i] = str[i] - 32;
            continue;
        }
        if (i != 0 && (str[i] >= 'a' && str[i] <= 'z') && my_alphaisalpha(str[i - 1]) == 1) {
            str[i] = str[i] - 32;
            continue;
        }
        else if (i != 0 && (str[i] >= 'A' && str[i] <= 'Z') && my_alphaisalpha(str[i - 1]) == 0) {
            str[i] = str[i] + 32;
            continue;
        }
    }
    return (str);
}