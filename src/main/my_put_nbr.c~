/*
** EPITECH PROJECT, 2019
** my_putnbr.c
** File description:
** my_putnbr.c
*/

#include "my.h"

void my_putnbr(int nbr)
{
    int print = 0;

    if (nbr <= 9 && nbr >= 0)
        my_putchar(nbr + '0');
    if (nbr < 0) {
        write(1, "-", 1);
        nbr = nbr * -1;
    }
    if (nbr > 9) {
        print = nbr % 10;
        my_putnbr(nbr / 10);
        my_putchar(print + '0');
    }
}