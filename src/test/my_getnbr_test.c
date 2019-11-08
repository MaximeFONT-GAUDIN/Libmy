/*
** EPITECH PROJECT, 2019
** my_getnbr_test.c
** File description:
** my_getnbr_test.c
*/

#include "my_test.h"
#include <limits.h>
#include <criterion/criterion.h>

Test(my_getnbr, get_42)
{
    cr_assert_eq(my_getnbr("42"), 42);
}

Test(my_getnbr,get_minus42)
{
    cr_assert_eq(my_getnbr("-42"), -42);
}

Test(my_getnbr, get_nothing)
{
    cr_assert_eq(my_getnbr(""), 0);
}

Test(my_getnbr, multi_minus)
{
    cr_assert_eq(my_getnbr("---42"), -42);
}

Test(my_getnbr, multi_plus)
{
    cr_assert_eq(my_getnbr("++++42"), 42);
}

Test(my_getnbr, positiv_with_minus)
{
    cr_assert_eq(my_getnbr("----42"), 42);
}

Test(my_getnbr, same_minus_plus)
{
    cr_assert_eq(my_getnbr("-++-42"), 42);
}

Test(my_getnbr, more_minus)
{
    cr_assert_eq(my_getnbr("-+-+-42"), -42);
}

Test(my_getnbr, more_plus)
{
    cr_assert_eq(my_getnbr("+-+-+42"), 42);
}

Test(my_getnbr, int_max)
{
    cr_assert_eq(my_getnbr("2147483647"), 2147483647);
}

Test(my_getnbr, int_min)
{
    cr_assert_eq(my_getnbr("-2147483648"), -2147483648);
}

Test(my_getnbr, sup_int_max)
{
    cr_assert_eq(my_getnbr("100000000000000000000"), 0);
}

Test(my_getnbr, sub_int_min)
{
    cr_assert_eq(my_getnbr("-100000000000000000000"), 0);
}

Test(my_getnbr, with_letter)
{
    cr_assert_eq(my_getnbr("42a43"), 42);
}

Test(my_getnbr, with_random_minus_plus)
{
    cr_assert_eq(my_getnbr("+---+--++---+---+---+-42"), -42);
}
