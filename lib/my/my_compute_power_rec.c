/*
** EPITECH PROJECT, 2019
** my_compute_power_rec.c
** File description:
** my_compute_power_rec.c
*/

#include "../../include/my.h"

int my_compute_power_rec(int nb, int p)
{
    int nb1, nb2;

    if (p == 0)
        return (1);

    if (nb == 0 || p < 0)
        return (0);

    nb1 = my_compute_power_rec(nb, p - 1);
    nb2 = nb * nb1;

    if (nb2 / nb != nb1)
        return (0);
    
    return (nb2);
}