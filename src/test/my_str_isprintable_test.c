/*
** EPITECH PROJECT, 2019
** my_str_isprintable_test.c
** File description:
** my_str_isprintable_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_str_isprintable, only_alpha)
{
    cr_assert_eq(my_str_isprintable("DESLETTRESENMAJUSCULES"), 1);
}

Test(my_str_isprintable, with_space)
{
    cr_assert_eq(my_str_isprintable("tout en minuscule"), 1);
}

Test(my_str_isprintable, with_uppercase)
{
    cr_assert_eq(my_str_isprintable("ToutEnMinuscule"), 1);
}

Test(my_str_isprintable, with_space_and_uppercase)
{
    cr_assert_eq(my_str_isprintable("Tout En Minuscule"), 1);
}

Test(my_str_isprintable, with_nbr)
{
    cr_assert_eq(my_str_isprintable("tout5enmi8nusc7ule"), 1);
}

Test(my_str_isprintable, empty_str)
{
    cr_assert_eq(my_str_isprintable(""), 0);
}

Test(my_str_isprintable, non_printable)
{
    cr_assert_eq(my_str_isprintable("des mots\n sur deux \tlignes"), 0);
}