/*
** EPITECH PROJECT, 2019
** my_putchar_test.c
** File description:
** my_putchar_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_putchar, print_c)
{
    cr_redirect_stdout();
    my_putchar('c');
    cr_assert_stdout_eq_str("c");
}

Test(my_putchar, ascii65)
{
    cr_redirect_stdout();
    my_putchar(65);
    cr_assert_stdout_eq_str("A");
}