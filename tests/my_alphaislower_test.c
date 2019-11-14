/*
** EPITECH PROJECT, 2019
** my_alphaislower_test.c
** File description:
** my_alphaislower_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_alphaislower, lower_alpha)
{
    cr_assert_eq(my_alphaislower('a'), 0);
}

Test(my_alphaislower, upper_alpha)
{
    cr_assert_eq(my_alphaislower('A'), 1);
}

Test(my_alphaislower, lower_ascii)
{
    cr_assert_eq(my_alphaislower(97), 0);
}

Test(my_alphaislower, upper_ascii)
{
    cr_assert_eq(my_alphaislower(65), 1);
}