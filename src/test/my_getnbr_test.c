/*
** EPITECH PROJECT, 2019
** my_getnbr_test.c
** File description:
** my_getnbr_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_getnbr, get_42)
{
    cr_assert_eq(my_getnbr("42"), 42);
}

Test(my_getnbr,get_minus42)
{
    cr_assert_eq(my_getnbr("-42"), -42);
}