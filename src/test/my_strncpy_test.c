/*
** EPITECH PROJECT, 2019
** my_strncpy_test.c
** File description:
** my_strncpy_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strncpy, cpy_5)
{
    char *str1 = "Hello World!";
    char str2[5];
    int nb = 5;

    cr_assert_str_eq(my_strncpy(str1, str2, nb), "Hello");
}

Test(my_strncpy, cpy_bigger)
{
    char *str1 = "Hello";
    char str2[20];
    int nb = 20;

    cr_assert_str_eq(my_strncpy(str1, str2, nb), "Hello");
}

Test(my_strncy, empty_string)
{
    char *str1 = "";
    char str2[20];
    int nb = 3;

    my_strncpy(str1, str2, nb);
    cr_assert_str_empty(str2);
}



Test(my_strncpy, cpy_5_non_empty_string)
{
    char *str1 = "Hello World!";
    char str2[5] = "hey";
    int nb = 5;

    cr_assert_str_eq(my_strncpy(str1, str2, nb), "Hello");
}

Test(my_strncpy, cpy_bigger_non_empty_string)
{
    char *str1 = "Hello";
    char str2[20] = "hey hey";
    int nb = 20;

    cr_assert_str_eq(my_strncpy(str1, str2, nb), "Hello");
}

Test(my_strncpy, empty_string_non_empty_string)
{
    char *str1 = "";
    char str2[20] = "meme com que strcpy";
    int nb = 3;

    my_strncpy(str1, str2, nb);
    cr_assert_str_empty(str2);
}