/*
** EPITECH PROJECT, 2019
** my_strdup_test.c
** File description:
** my_strdup_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strdup, filled_string)
{
    char str[] = "une string rempli";

    cr_assert_str_eq(str, my_strdup(str));
    cr_assert_neq(str, my_strdup(str));
}

Test(my_strdup, empty_string)
{
    char str[] = "";

    cr_assert_str_empty(my_strdup(str));
    cr_assert_neq(str, my_strdup(str));
}