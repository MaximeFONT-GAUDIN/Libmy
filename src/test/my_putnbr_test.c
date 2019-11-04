/*
** EPITECH PROJECT, 2019
** my_putnbr_test.c
** File description:
** my_putnbr_test.c
*/

#include "my_test.h"
#include <limits.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_putnbr, print_42)
{
    cr_redirect_stdout();
    my_putnbr(42);
    cr_assert_stdout_eq_str("42");
}

Test(my_putnbr, print_minus42)
{
    cr_redirect_stdout();
    my_putnbr(-42);
    cr_assert_stdout_eq_str("-42");
}

Test(my_putnbr, int_max)
{
    cr_redirect_stdout();
    my_putnbr(2147483647);
    cr_assert_stdout_eq_str("2147483647");
}

Test(my_putnbr, int_min)
{
    cr_redirect_stdout();
    my_putnbr(-2147483648);
    cr_assert_stdout_eq_str("-2147483648");
}