/*
** EPITECH PROJECT, 2019
** my_strcmp_test.c
** File description:
** my_strcmp_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strcmp, the_same)
{
    char *str1 = "HelloWorld";

    cr_assert_eq(my_strcmp(str1, "HelloWorld"), 0);
}

Test(my_strcmp, lower_than)
{
    char *str2 = "Hello";
    char *str3 = "World";

    cr_assert_lt(my_strcmp(str2, str3), 0);
}

Test(my_strcmp, greater_than)
{
    char *str1 = "World";
    char *str2 = "Hello";

    cr_assert_gt(my_strcmp(str1, str2), 0);
}