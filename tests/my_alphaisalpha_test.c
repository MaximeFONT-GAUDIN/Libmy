/*
** EPITECH PROJECT, 2019
** my_alphaisalpha_test.c
** File description:
** my_alphaisalpha_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_alphaisalpha, alpha_upper)
{
    cr_assert_eq(my_alphaisalpha('A'), 0);
}

Test(my_alphaisalpha, alpha_lower)
{
    cr_assert_eq(my_alphaisalpha('a'), 0);
}

Test(my_alphaisalpha, code_ascii_true)
{
    cr_assert_eq(my_alphaisalpha(70), 0);
}

Test(my_alphaisalpha, code_ascii_false)
{
    cr_assert_eq(my_alphaisalpha(95), 1);
}

Test(my_alphaisalpha, alpha_num)
{
    cr_assert_eq(my_alphaisalpha('5'), 1);
}
