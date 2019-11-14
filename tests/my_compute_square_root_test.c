/*
** EPITECH PROJECT, 2019
** my_compute_square_root_test.c
** File description:
** my_compute_square_root_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_compute_square_root, square_25)
{
    cr_assert_eq(my_compute_square_root(25), 5);
}

Test(my_compute_square_root, square_3)
{
    cr_assert_eq(my_compute_square_root(3), 0);
}

Test(my_compute_square_root, square_neg)
{
    cr_assert_eq(my_compute_square_root(-25), 0);
}

Test(my_compute_square_root, square_0)
{
    cr_assert_eq(my_compute_square_root(0), 0);
}