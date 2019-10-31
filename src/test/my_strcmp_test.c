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

Test(my_strcmp, different)
{
    char *str2 = "Hello";
    char *str3 = "World";
    cr_assert_eq(my_strcmp(str2, str3), 1);
}