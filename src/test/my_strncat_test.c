/*
** EPITECH PROJECT, 2019
** my_strncat_test.c
** File description:
** my_strncat_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strncat, correct)
{
    cr_assert_str_eq(my_strncat("Hello", "World", 5), "HelloWorld");
}

Test(my_strncat, too_big)
{
    cr_assert_str_eq(my_strncat("Hello ","World", 10), "Hello World");
}

Test(my_strncat, bigger)
{
    cr_assert_str_eq(my_strncat("Hello ", "World", 100), "Hello World");
}