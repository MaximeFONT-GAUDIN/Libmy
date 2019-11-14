/*
** EPITECH PROJECT, 2019
** my_alphaisprint.c
** File description:
** my_alphaisprint.c
*/

#include "../../include/my.h"

int my_alphaisprint(char c)
{
    if (c < ' ' || c > '~')
        return (1);
    return (0);
}