/*
** EPITECH PROJECT, 2019
** my_compute_square_root.c
** File description:
** my_compute_square_root.c
*/

#include "../../include/my.h"

int my_compute_square_root(int nb)
{
    for (int i = 0; i <= nb / 2 + 1; i++) {
        if (i * i == nb)
            return (i);
    }
    return (0);
}