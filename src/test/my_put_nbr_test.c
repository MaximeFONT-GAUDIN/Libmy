/*
** EPITECH PROJECT, 2019
** my_put_nbr_test.c
** File description:
** my_put_nbr_test.c
*/

#include "my_test.h"
#include <limits.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_put_nbr, print_42)
{
    cr_redirect_stdout();
    my_put_nbr(42);
    cr_assert_stdout_eq_str("42");
}

Test(my_put_nbr, print_minus42)
{
    cr_redirect_stdout();
    my_put_nbr(-42);
    cr_assert_stdout_eq_str("-42");
}

Test(my_put_nbr, int_max)
{
    cr_redirect_stdout();
    my_put_nbr(2147483647);
    cr_assert_stdout_eq_str("2147483647");
}

Test(my_put_nbr, int_min)
{
    cr_redirect_stdout();
    my_put_nbr(-2147483648);
    cr_assert_stdout_eq_str("-2147483648");
}