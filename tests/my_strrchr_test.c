/*
** EPITECH PROJECT, 2019
** my_strrchr_test.c
** File description:
** my_strrchr_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strrchr, correct)
{
    char *str = "Bonjour";
    char *r = my_strrchr(str, 'n');

    cr_assert_eq(r, str + 2);
}

Test(my_strrchr, without_occurence)
{
    char *str = "bonjour";
    char *r = my_strrchr(str, 'w');

    cr_assert_eq(NULL, r);
}

Test(my_strrchr, with_multiple_occurence)
{
    char *str = "Bonjour";
    char *r = my_strrchr(str, 'o');

    cr_assert_eq(r, str + 4);
}

Test(my_strrchr, empty_str)
{
    char *str = "";
    char *r = my_strrchr(str, 'a');

    cr_assert_eq(r, NULL);
}

Test(my_strrchr, ocurrence_is_the_first)
{
    char *str = "bonjour";
    char *r = my_strrchr(str, 'b');

    cr_assert_eq(r, str);
}

Test(my_strrchr, occurence_is_the_last)
{
    char *str = "bonjour";
    char *r = my_strrchr(str, 'r');

    cr_assert_eq(r, str + 6);
}