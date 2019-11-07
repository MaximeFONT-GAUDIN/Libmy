/*
** EPITECH PROJECT, 2019
** my_str_isnum_test.c
** File description:
** my_str_isnum_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_str_isnum, only_digit)
{
    cr_assert_eq(my_str_isnum("145533698"), 1);
}

Test(my_str_isnum, only_alpha)
{
    cr_assert_eq(my_str_isnum("toutenminuscule"), 0);
}

Test(my_str_isnum, digit_and_alpha)
{
    cr_assert_eq(my_str_isnum("1fs4sffsdg5ssffs2fsfsf5fsfsf5fsfs6fsfs23"), 0);
}

Test(my_str_isnum, empty_str)
{
    cr_assert_eq(my_str_isnum(""), 0);
}