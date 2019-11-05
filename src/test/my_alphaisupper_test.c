/*
** EPITECH PROJECT, 2019
** my_alphaisupper_test.c
** File description:
** my_alphaisupper_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_alphaisupper, lower_alpha)
{
    cr_assert_eq(my_alphaisupper('a'), 1);
}

Test(my_alphaisupper, upper_alpha)
{
    cr_assert_eq(my_alphaisupper('A'), 0);
}

Test(my_alphaisupper, lower_ascii)
{
    cr_assert_eq(my_alphaisupper(97), 1);
}

Test(my_alphaisupper, upper_ascii)
{
    cr_assert_eq(my_alphaisupper(65), 0);
}