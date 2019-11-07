/*
** EPITECH PROJECT, 2019
** my_is_prime_test.c
** File description:
** my_is_prime_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_is_prime, prime)
{
    cr_assert_eq(my_is_prime(5), 1);
}

Test(my_is_prime, non_prime)
{
    cr_assert_eq(my_is_prime(6), 0);
}

Test(my_is_prime, negativ)
{
    cr_assert_eq(my_is_prime(-5), 0);
}