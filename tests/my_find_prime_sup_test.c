/*
** EPITECH PROJECT, 2019
** my_find_prime_sup_test.c
** File description:
** my_find_prime_sup_test.c
*/

#include "my_test.h"
#include <limits.h>
#include <criterion/criterion.h>

Test(my_find_prime_sup, prime)
{
    cr_assert_eq(my_find_prime_sup(5), 5);
}

Test(my_find_prime_sup, no_prime)
{
    cr_assert_eq(my_find_prime_sup(4), 5);
}

Test(my_find_prime_sup, negativ)
{
    cr_assert_eq(my_find_prime_sup(-5), 2);
}

Test(my_find_prime_sup, one)
{
    cr_assert_eq(my_find_prime_sup(1), 2);
}

Test(my_find_prime_sup, max_int)
{
    cr_assert_eq(my_find_prime_sup(INT_MAX - 1), INT_MAX);
}

Test(my_find_prime_sup, zero)
{
    cr_assert_eq(my_find_prime_sup(0), 2);
}