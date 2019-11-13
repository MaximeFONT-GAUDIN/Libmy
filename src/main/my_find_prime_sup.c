/*
** EPITECH PROJECT, 2019
** my_find_prime_sup.c
** File description:
** my_find_prime_sup.c
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    if (nb < 2)
        return (2);
    if (my_is_prime(nb) == 1)
        return (nb);
    for (int i = nb + 1; 1; i++) {
        if (my_is_prime(i) == 1)
            return (i);
    }
    return (0);
}