/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/

#include "../../include/my.h"
#include <limits.h>

void my_put_nbr(int nbr)
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
        my_put_nbr(nbr / 10);
        my_putchar(print + '0');
    }
}

// int main(void)
// {
//     printf("%d\n", my_put_nbr(INT_MIN));
//     return 0;
// }