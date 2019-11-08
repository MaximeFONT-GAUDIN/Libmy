/*
** EPITECH PROJECT, 2019
** my_compute_power_rec_test.c
** File description:
** my_compute_power_rec_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_compute_power_rec, correct)
{
    cr_assert_eq(my_compute_power_rec(3, 3), 27);
}

Test(my_compute_power_rec, negativ)
{
    cr_assert_eq(my_compute_power_rec(3, -3), 0);
}

Test(my_compute_power_rec, zero)
{
    cr_assert_eq(my_compute_power_rec(3, 0), 1);
}

// Test(my_compute_power_rec, big_power)
// {
//     cr_assert_eq(my_compute_power_rec(123, 456), 0);
// }