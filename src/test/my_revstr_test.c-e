/*
** EPITECH PROJECT, 2019
** my_revstr_test.c
** File description:
** my_revstr_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>


Test(my_revstr, rev_HelloWorld)
{
    char *rev;
    
    rev = my_revstr("HelloWorld");
    cr_assert_str_eq(rev, "dlroWolleH");
}

Test(my_revstr, rev_additionneur)
{
    char *rev;

    rev = my_revstr("-+-+-+-+-+-+-+");
    cr_assert_str_eq(rev, "+-+-+-+-+-+-+-");
}

Test(my_revstr, epty_string)
{
    char *str = "";

    cr_assert_str_empty(my_revstr(str));
}

Test(my_revstr, even_string)
{
    cr_assert_str_eq(my_revstr("salut"), "tulas");
}