/*
** EPITECH PROJECT, 2019
** my_str_isupper_test.c
** File description:
** my_str_isupper_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_str_isupper, only_alpha)
{
    cr_assert_eq(my_str_isupper("DESLETTRESENMAJUSCULES"), 1);
}

Test(my_str_isupper, with_space)
{
    cr_assert_eq(my_str_isupper("tout en minuscule"), 0);
}

Test(my_str_isupper, with_uppercase)
{
    cr_assert_eq(my_str_isupper("ToutEnMinuscule"), 0);
}

Test(my_str_isupper, with_space_and_uppercase)
{
    cr_assert_eq(my_str_isupper("Tout En Minuscule"), 0);
}

Test(my_str_isupper, with_nbr)
{
    cr_assert_eq(my_str_isupper("tout5enmi8nusc7ule"), 0);
}

Test(my_str_isupper, empty_str)
{
    cr_assert_eq(my_str_isupper(""), 0);
}