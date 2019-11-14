/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** my_putstr.c
*/

#include "../../include/my.h"

void my_putstr(char *str)
{
    if (str[0] == 0) {
        my_putchar(0);
        return;
    }
    for (int i = 0; str[i] != 0; i++)
        my_putchar(str[i]);
}