/*
** EPITECH PROJECT, 2019
** my_put_nbr_base.c
** File description:
** my_put_nbr_base.c
*/

#include "my.h"

void my_put_nbr_base(int nb, char *base)
{
    int size_base = my_strlen(base);

    if (nb < 0) {
        nb = nb * - 1;
        my_putchar('-');
    }
    if (nb >= size_base)
        my_put_nbr_base(nb / size_base, base);
    my_putchar(base[nb % size_base]);
}