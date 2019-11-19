/*
** EPITECH PROJECT, 2019
** my_alphaisalpha.c
** File description:
** my_alphaisalpha.c
*/

#include "../../include/my.h"

int my_alphaisalpha(char c)
{
    if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
        return (1);
    return (0);
}