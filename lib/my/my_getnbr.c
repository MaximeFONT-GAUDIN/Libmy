/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** my_getnbr.c
*/

#include "../../include/my.h"

int my_getnbr(char *str)
{
    int nb = 0;
    long int n = 0;

    for (int i = 0; str[i] != 0; ++i) {
        if (str[i] == '-')
            nb++;
        if (str[i] >= '0' && str[i] <= '9')
            n = n * 10 + (str[i] - '0');
        else if (str[i] >= 'a' && str[i] <= 'z')
            break;
        if (n > 2147483647 && nb % 2 != 1)
            return (0);
        else if (n > 2147483648 && nb % 2 == 1)
            return (0);
    }
    if (nb % 2 == 1)
        return (n * (-1));
    return (n);
}