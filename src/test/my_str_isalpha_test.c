/*
** EPITECH PROJECT, 2019
** my_str_isalpha_test.c
** File description:
** my_str_isalpha_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_str_isalpha, only_alpha)
{
    cr_assert_eq(my_str_isalpha("toutenminuscule"), 1);
}

Test(my_str_isalpha, with_space)
{
    cr_assert_eq(my_str_isalpha("tout en minuscule"), 0);
}

Test(my_str_isalpha, with_uppercase)
{
    cr_assert_eq(my_str_isalpha("ToutEnMinuscule"), 1);
}

Test(my_str_isalpha, with_space_and_uppercase)
{
    cr_assert_eq(my_str_isalpha("Tout En Minuscule"), 0);
}

Test(my_str_isalpha, with_nbr)
{
    cr_assert_eq(my_str_isalpha("tout5enmi8nusc7ule"), 0);
}

Test(my_str_isalpha, empty_str)
{
    cr_assert_eq(my_str_isalpha(""), 0);
}