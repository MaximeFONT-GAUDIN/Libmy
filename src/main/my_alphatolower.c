/*
** EPITECH PROJECT, 2019
** my_alphatolower.c
** File description:
** my_alphatolower.c
*/

#include "my.h"

char my_alphatolower(char c)
{
    if (c > 64 && c < 91)
        c = c + 32;
    return (c);
}