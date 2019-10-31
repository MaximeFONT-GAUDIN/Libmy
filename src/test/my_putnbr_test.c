/*
** EPITECH PROJECT, 2019
** my_putnbr_test.c
** File description:
** my_putnbr_test.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_putnbr, print_42)
{
    cr_redirect_stdout();
    my_putnbr(42);
    cr_assert_stdout_str_eq("42");
}