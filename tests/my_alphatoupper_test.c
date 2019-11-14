/*
** EPITECH PROJECT, 2019
** my_alphatoupper_test.c
** File description:
** my_alphatoupper_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_alphatoupper, ltr)
{
    cr_assert_eq(my_alphatoupper('e'), 69);
}

Test(my_alphatoupper, ascii)
{
    cr_assert_eq(my_alphatoupper(122), 90);
}

Test(my_alphatoupper, ltr_lower)
{
    cr_assert_eq(my_alphatoupper('E'), 69);
}

Test(my_alphatoupper, ascii_lower)
{
    cr_assert_eq(my_alphatoupper(69), 69);
}