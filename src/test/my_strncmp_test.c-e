/*
** EPITECH PROJECT, 2019
** my_strncmp_test.c
** File description:
** my_strncmp_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strncmp, egal)
{
    cr_assert_eq(my_strncmp("Hello", "Hello", 3), 0);
}

Test(my_strncmp, different)
{
    cr_assert_lt(my_strncmp("Hello", "World", 2), 0);
}

Test(my_strncmp, str2_small)
{
    cr_assert_gt(my_strncmp("HelloWorld", "Hello", 7), 0);
}

Test(my_strncmp, str1_small)
{
    cr_assert_lt(my_strncmp("Hello", "HelloWorld", 7), 0);
}

Test(My_strncmp, str1_small_5char)
{
    cr_assert_eq(my_strncmp("HelloWorld", "Hello", 5), 0);
}