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




Test(My_strncmp, str1_empty)
{
    cr_assert_lt(my_strncmp("", "Hello", 5), 0);
}

Test(My_strncmp, str2_empty)
{
    cr_assert_gt(my_strncmp("HelloWorld", "", 5), 0);
}

Test(My_strncmp, nb_empty)
{
    cr_assert_eq(my_strncmp("HelloWorld", "Hello", 0), 0);
}

Test(My_strncmp, nb_empty_str1_empty)
{
    cr_assert_eq(my_strncmp("", "Hello", 0), 0);
}

Test(My_strncmp, nb_empty_str2_empty)
{
    cr_assert_eq(my_strncmp("HelloWorld", "", 0), 0);
}

Test(My_strncmp, str1_and_str2_and_nb_empty)
{
    cr_assert_eq(my_strncmp("", "", 0), 0);
}

Test(my_strncmp, WW10)
{
    cr_assert_eq(my_strncmp("world", "world", 10), 0);
}

Test(my_strncmp, WW10_bis)
{
    cr_assert_eq(my_strncmp("marvin", "marvin", 10), 0);
}