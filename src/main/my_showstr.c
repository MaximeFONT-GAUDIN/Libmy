/*
** EPITECH PROJECT, 2019
** my_showstr.c
** File description:
** my_showstr.c
*/

#include "my.h"

int my_showstr(char *str)
{
    if (str == 0)
        return (0);
    for (int i = 0; str[i] != 0; i++) {
        if (my_alphaisprint(str[i]) == 0)
            my_putchar(str[i]);
        else {
            my_putchar('\\');
            (str[i] <= 15) ? my_putchar('0') : NULL;
            my_put_nbr_base(str[i], "0123456789abcdef");
        }
    }
    return (0);
}