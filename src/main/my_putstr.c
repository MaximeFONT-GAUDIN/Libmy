/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** my_putstr.c
*/

#include "my.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i] != 0; i++)
        write(1, &str[i], 1);
}