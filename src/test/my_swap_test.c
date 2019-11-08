/*
** EPITECH PROJECT, 2019
** my_strswap_test.c
** File description:
** my_strswap_test.c
*/

#include "my_test.h"
#include <limits.h>
#include <criterion/criterion.h>

Test(my_swap, swap_correctly_two_int)
{
    int c1 = 3;
    int c2 = 6;

    my_swap(&c1, &c2);
    cr_assert(c2 == 3 && c1 == 6);
}

Test(my_swap, swap_two_intv2)
{
    int c1 = 5;
    int c2 = 0;

    my_swap(&c1, &c2);
    cr_assert(c2 == 5 && c1 == 0);
}

Test(my_swap, max_min)
{
    int c1 = INT_MAX;
    int c2 = INT_MIN;

    my_swap(&c1, &c2);
    cr_assert(c2 == INT_MAX && c1 == INT_MIN);
}