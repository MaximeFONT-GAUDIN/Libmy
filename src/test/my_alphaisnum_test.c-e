/*
** EPITECH PROJECT, 2019
** my_alphaisnum_test.c
** File description:
** my_alphaisnum_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_alphaisnum, nbr)
{
    cr_assert_eq(my_alphaisnum('9'), 0);
}

Test(my_alphaisnum, ltr)
{
    cr_assert_eq(my_alphaisnum('v'), 1);
}

Test(my_alphaisnum, true_ascii)
{
    cr_assert_eq(my_alphaisnum(50), 0);
}

Test(my_alphaisnum, false_ascii)
{
    cr_assert_eq(my_alphaisnum(30), 1);
}