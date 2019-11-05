/*
** EPITECH PROJECT, 2019
** my_putstr_test.c
** File description:
** my_putstr_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_putstr, print_str)
{
    cr_redirect_stdout();
    my_putstr("put str!");
    cr_assert_stdout_eq_str("put str!");
}

Test(my_putstr, print_str_with_nbr)
{
    cr_redirect_stdout();
    my_putstr("1 phras76-e un765 7654peu p67lus lo6ngue avec de4s chiff4res");
    cr_assert_stdout_eq_str("1 phras76-e un765 7654peu p67lus lo6ngue avec de4s chiff4res");
}

Test(my_putstr, empty_string)
{
    char *str = "";
    cr_redirect_stdout();
    my_putstr("");
    cr_assert_str_empty(str);
}