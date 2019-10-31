/*
** EPITECH PROJECT, 2019
** my_putstr_test.c
** File description:
** my_putstr_test.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_putstr, print_str)
{
    cr_redirect_stdout();
    my_putstr("put str!");
    cr_assert_stdout_str_eq("put str!");
}