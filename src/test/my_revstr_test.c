/*
** EPITECH PROJECT, 2019
** my_revstr_test.c
** File description:
** my_revstr_test.c
*/

#include <criterion/criterion.h>

char *rev;

Test(my_revstr, rev_HelloWorld)
{
    rev = my_revstr("HelloWorld");
    cr_assert_str_eq(rev, "dlroWolleH");
}