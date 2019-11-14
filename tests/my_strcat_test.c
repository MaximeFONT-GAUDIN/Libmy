/*
** EPITECH PROJECT, 2019
** my_strcat_test.c
** File description:
** my_strcat_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strcat, concat_correctly)
{
    char str1[11] = "Hello";
    char *str2 = "World";
    char *r = my_strcat(str1, str2);

    cr_assert_str_eq(str1, "HelloWorld");
    cr_assert_eq(str1, r);
}

Test(my_strcat, concat_different_size)
{
    char str1[10] = "Little";
    char *str2 = "Big";
    char *r = my_strcat(str1, str2);

    cr_assert_str_eq(str1, "LittleBig");
    cr_assert_eq(str1, r);
}

Test(my_strcat, empty_str1)
{
    char str1[11] = "";
    char *str2 = "HelloWorld";
    char *r = my_strcat(str1, str2);

    cr_assert_str_eq(str1, "HelloWorld");
    cr_assert_eq(str1, r);
}

Test(my_strcat, empty_str2)
{
    char str1[11] = "HelloWorld";
    char *str2 = "";
    char *r = my_strcat(str1, str2);

    my_strcat(str1, str2);
    cr_assert_str_eq(str1, "HelloWorld");
    cr_assert_eq(str1, r);
}

Test(my_strcat, same_pointer)
{
    char str1[11] = "Hello";
    char *str2 = "World";
    char *r = my_strcat(str1, str2);

    cr_assert_eq(str1, r);
    cr_assert_eq(str1, r);
}

Test(my_strcat, empty_strings)
{
    char str1[5] = "";
    char *str2 = "";
    char *r = my_strcat(str1, str2);

    cr_assert_str_empty(r);
    cr_assert_eq(str1, r);
}