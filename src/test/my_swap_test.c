/*
** EPITECH PROJECT, 2019
** my_strswap_test.c
** File description:
** my_strswap_test.c
*/

#include <criterion/criterion.h>

char c1 = 'b';
char c2 = 'a';

Test(my_swap, swap_correctly_two_char)
{
    my_swap(c1, c2);
    cr_assert(c2 == 'b' && c1 == 'a');
}