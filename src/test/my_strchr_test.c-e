/*
** EPITECH PROJECT, 2019
** my_strchr_test.c
** File description:
** my_strchr_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strchr, correct)
{
    char *str = "Bonjour";
    char *r = my_strchr(str, 'n');

    cr_assert_eq(r, str + 2);
}

Test(my_strchr, without_occurence)
{
    char *str = "bonjour";
    char *r = my_strchr(str, 'w');

    cr_assert_eq(NULL, r);
}

Test(my_strchr, with_multiple_occurence)
{
    char *str = "Bonjour";
    char *r = my_strchr(str, 'o');

    cr_assert_eq(r, str + 1);
}

Test(my_strchr, empty_str)
{
    char *str = "";
    char *r = my_strchr(str, 'a');

    cr_assert_eq(r, NULL);
}

Test(my_strchr, ocurrence_is_the_first)
{
    char *str = "bonjour";
    char *r = my_strchr(str, 'b');

    cr_assert_eq(r, str);
}

Test(my_strchr, occurence_is_the_last)
{
    char *str = "bonjour";
    char *r = my_strchr(str, 'r');

    cr_assert_eq(r, str + 6);
}