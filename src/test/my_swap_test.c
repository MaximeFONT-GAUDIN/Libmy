/*
** EPITECH PROJECT, 2019
** my_strswap_test.c
** File description:
** my_strswap_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_swap, swap_correctly_two_char)
{
    char c1 = 'b';
    char c2 = 'a';

    my_swap(&c1, &c2);
    cr_assert(c2 == 'b' && c1 == 'a');
}

Test(my_swap, swap_two_charv2)
{
    char c1 = ' ';
    char c2 = 0;

    my_swap(&c1, &c2);
    cr_assert(c2 == ' ' && c1 == 0);
}