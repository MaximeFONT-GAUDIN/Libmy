/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** my_getnbr.c
*/

#include "my.h"

int my_getnbr(char *str)
{
    int nb = 0;
    int n = 0;

    for (int i = 0; str[i] != 0; ++i) {
        if (str[i] == '-')
            nb++;
        else if (str[i] == '+')
            ++i;
        if (str[i] >= '0' && str[i] <= '9')
            n = n * 10 + (str[i] - '0');
        else if (str[i] >= 'a' && str[i] <= 'z')
            break;
    }
    if (nb % 2 == 1)
        return (n * (-1));
    return (n);
}