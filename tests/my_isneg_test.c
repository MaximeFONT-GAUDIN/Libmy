/*
** EPITECH PROJECT, 2019
** my_isneg_test.c
** File description:
** my_isneg_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>
#include<criterion/redirect.h>

Test(my_isneg, positive)
{
    cr_redirect_stdout();
    my_isneg(1);
    cr_assert_stdout_eq_str("P");
}

Test(my_isneg, negative)
{
    cr_redirect_stdout();
    my_isneg(-1);
    cr_assert_stdout_eq_str("N");
}

Test(my_isneg, zero)
{
    cr_redirect_stdout();
    my_isneg(0);
    cr_assert_stdout_eq_str("P");
}