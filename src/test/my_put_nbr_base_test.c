/*
** EPITECH PROJECT, 2019
** my_put_nbr_base_test.c
** File description:
** my_put_nbr_base_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_put_nbr_base, in_10_out_10_nb_5)
{
    cr_redirect_stdout();
    my_put_nbr_base(5, "0123456789");
    cr_assert_stdout_eq_str("5");
}

Test(my_put_nbr_base, in_10_out_16_nb_5)
{
    cr_redirect_stdout();
    my_put_nbr_base(5, "0123456789ABCDEF");
    cr_assert_stdout_eq_str("5");
}

Test(my_put_nbr_base, in_10_out_16_nb_13)
{
    cr_redirect_stdout();
    my_put_nbr_base(13, "0123456789ABCDEF");
    cr_assert_stdout_eq_str("D");
}

Test(my_put_nbr_base, in_10_out_20_nb_1000)
{
    cr_redirect_stdout();
    my_put_nbr_base(1000,"0123456789ABCDEFGHIJ");
    cr_assert_stdout_eq_str("2A0");
}



Test(my_put_nbr_base, neq_in_10_out_10_nb_5)
{
    cr_redirect_stdout();
    my_put_nbr_base(-5, "0123456789");
    cr_assert_stdout_eq_str("-5");
}

Test(my_put_nbr_base, neq_in_10_out_16_nb_5)
{
    cr_redirect_stdout();
    my_put_nbr_base(-5, "0123456789ABCDEF");
    cr_assert_stdout_eq_str("-5");
}

Test(my_put_nbr_base, neq_in_10_out_16_nb_13)
{
    cr_redirect_stdout();
    my_put_nbr_base(-13, "0123456789ABCDEF");
    cr_assert_stdout_eq_str("-D");
}

Test(my_put_nbr_base, neq_in_10_out_20_nb_1000)
{
    cr_redirect_stdout();
    my_put_nbr_base(-1000,"0123456789ABCDEFGHIJ");
    cr_assert_stdout_eq_str("-2A0");
}