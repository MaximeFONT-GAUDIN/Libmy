/*
** EPITECH PROJECT, 2019
** my_getnbr_test.c
** File description:
** my_getnbr_test.c
*/

#include <criterion/criterion.h>

Test(my_getnbr, get_42)
{
    cr_assert_str_eq(my_getnbr(42), "42");
}