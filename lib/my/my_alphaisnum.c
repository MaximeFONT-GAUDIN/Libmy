/*
** EPITECH PROJECT, 2019
** my_alphaisnum.c
** File description:
** my_alphaisnum.c
*/

#include "../../include/my.h"

int my_alphaisnum(char c)
{
    if (c < 48 || c > 57)
        return (1);
    return (0);
}