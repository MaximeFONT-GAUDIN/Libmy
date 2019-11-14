/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** my_putchar.c
*/

#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}