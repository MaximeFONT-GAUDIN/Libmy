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
    char *str3 = "World";
    char *str2 = "Hello";

    cr_assert_lt(my_strcmp(str2, str3), 0);
}

Test(my_strcmp, greater_than)
{
    char *str1 = "World";
    char *str2 = "Hello";

    cr_assert_gt(my_strcmp(str1, str2), 0);
}

Test(my_strcmp, str1_contain_str2)
{
    char *str1 = "HelloWorld";
    char *str2 = "Hello";

    cr_assert_gt(my_strcmp(str1, str2), 0);
}

Test(my_strcmp, str2_contain_str1)
{
    char *str1 = "Hello";
    char *str2 = "HelloWorld";

    cr_assert_lt(my_strcmp(str1, str2), 0);
}

Test(my_strcmp, str1_empty)
{
    char *str1 = "";
    char *str2 = "find";

    cr_assert_lt(my_strcmp(str1, str2), 0);
}

Test(my_strcmp, str2_empty)
{
    char *str1 = "find";
    char *str2 = "";

    cr_assert_gt(my_strcmp(str1, str2), 0);
}

// Test(my_strcmp, str2_zero)
// {

// }

Test(my_strcmp, all_empty)
{
    cr_assert_eq(my_strcmp("", ""), 0);
}