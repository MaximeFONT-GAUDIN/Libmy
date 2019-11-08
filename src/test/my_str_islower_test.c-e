/*
** EPITECH PROJECT, 2019
** my_str_islower_test.c
** File description:
** my_str_islower_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_str_islower, only_alpha)
{
    cr_assert_eq(my_str_islower("toutenminuscule"), 1);
}

Test(my_str_islower, with_space)
{
    cr_assert_eq(my_str_islower("tout en minuscule"), 0);
}

Test(my_str_islower, with_uppercase)
{
    cr_assert_eq(my_str_islower("ToutEnMinuscule"), 0);
}

Test(my_str_islower, with_space_and_uppercase)
{
    cr_assert_eq(my_str_islower("Tout En Minuscule"), 0);
}

Test(my_str_islower, with_nbr)
{
    cr_assert_eq(my_str_islower("tout5enmi8nusc7ule"), 0);
}

Test(my_str_islower, empty_str)
{
    cr_assert_eq(my_str_islower(""), 0);
}