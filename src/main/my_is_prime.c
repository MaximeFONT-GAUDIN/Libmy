/*
** EPITECH PROJECT, 2019
** my_is_prime.c
** File description:
** my_is_prime.c
*/

#include "my.h"

int my_is_prime(int nb)
{
    if (nb <= 0)
        return (0);
    for (int i = 1; i != nb; i++) {
        if (nb % i == 0 && i != 1 && i < nb)
            return (0);
    }
    return (1);
}