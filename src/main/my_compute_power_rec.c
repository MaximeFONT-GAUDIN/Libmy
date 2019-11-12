/*
** EPITECH PROJECT, 2019
** my_compute_power_rec.c
** File description:
** my_compute_power_rec.c
*/

// nb^n = nb(nb^n-1)
#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    int result = nb;
    int save = result;

    for (int i = 0; i != p; i++) {
        save = result;
        result = result * nb;
        if (result / nb != save)
            return (0);
    }
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    else {
        p--;
        return (nb * my_compute_power_rec(nb, p));
    }
}