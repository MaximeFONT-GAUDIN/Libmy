/*
** EPITECH PROJECT, 2019
** my_alphaislower.c
** File description:
** my_alphaislower.c
*/

#include "../../include/my.h"

int my_alphaislower(char c)
{
    if (c < 'a' || c > 'z')
        return (1);
    return (0);
}