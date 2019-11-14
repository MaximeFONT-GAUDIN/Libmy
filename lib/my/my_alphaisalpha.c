/*
** EPITECH PROJECT, 2019
** my_alphaisalpha.c
** File description:
** my_alphaisalpha.c
*/

#include "../../include/my.h"

int my_alphaisalpha(char c)
{
    if ((c < 65 || c > 90) && (c < 97 || c > 122))
        return (1);
    return (0);
}