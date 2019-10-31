/*
** EPITECH PROJECT, 2019
** my_putchar_test.c
** File description:
** my_putchar_test.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_putchar, print_c)
{
    cr_redirect_stdout();
    my_putchar('c');
    cr_assert_stdout_str_eq("c");
}