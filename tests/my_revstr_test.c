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
    char rev[] = "HelloWorld";
    
    cr_assert_str_eq(my_revstr(rev), "dlroWolleH");
    cr_assert_eq(rev, my_revstr(rev));
}

Test(my_revstr, rev_additionneur)
{
    char rev[] = "-+-+-+-+-+-+-+";

    cr_assert_str_eq(my_revstr(rev), "+-+-+-+-+-+-+-");
    cr_assert_eq(rev, my_revstr(rev));
}

Test(my_revstr, epty_string)
{
    char str[] = "";

    cr_assert_str_empty(my_revstr(str));
    cr_assert_eq(str, my_revstr(str));
}

Test(my_revstr, even_string)
{
    char str[] = "salut";

    cr_assert_str_eq(my_revstr(str), "tulas");
    cr_assert_eq(str, my_revstr(str));
}