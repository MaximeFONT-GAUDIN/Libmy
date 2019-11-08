/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** my_swap.c
*/

#include "my.h"

void my_swap(int *c1, int *c2)
{
    int tmp;

    tmp = *c1;
    *c1 = *c2;
    *c2 = tmp;
}