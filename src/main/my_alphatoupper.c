/*
** EPITECH PROJECT, 2019
** my_alphatoupper.c
** File description:
** my_alphatoupper.c
*/

#include "my.h"

char my_alphatoupper(char c)
{
    if (c > 96 && c < 123)
        return (c - 32);
    return (c);
}