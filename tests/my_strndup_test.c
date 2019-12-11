/*
** EPITECH PROJECT, 2019
** my_strndup_test.c
** File description:
** my_strndup_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strndup, filled_string)
{
    char str[] = "une string rempli";
    char *str2 = my_strndup(str, 18);

    cr_assert_str_eq(str, str2);
    cr_assert_neq(str, str2);
    free(str2);
}

Test(my_strndup, empty_string)
{
    char str[] = "";
    char *str2 = my_strndup(str, 12);

    cr_assert_str_empty(str2);
    cr_assert_neq(str, str2);
    free(str2);
}

Test(my_strndup, filled_string_zero_nb)
{
    char str[] = "je suis un phrase";
    char *str2 = my_strndup(str, 0);

    cr_assert_str_empty(str2);
    cr_assert_neq(str, str2);
    free(str2);
}

Test(my_strndup, empty_string_zero_nb)
{
    char str[] = "";
    char *str2 = my_strndup(str, 0);

    cr_assert_str_empty(str2);
    cr_assert_neq(str, str2);
    free(str2);
}