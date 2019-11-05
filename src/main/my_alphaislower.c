/*
** EPITECH PROJECT, 2019
** my_alphaislower.c
** File description:
** my_alphaislower.c
*/

#include "my.h"

int my_alphaislower(char c)
{
    if (c < 97 || c > 122)
        return (1);
    return (0);
}