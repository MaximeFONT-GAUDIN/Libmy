/*
** EPITECH PROJECT, 2019
** my_strcmp_test.c
** File description:
** my_strcmp_test.c
*/

#include <criterion/criterion.h>

char *str1 = "HelloWorld";
char *str2 = "Hello";
char *str3 = "World";

Test(my_strcmp, the_same)
{
    cr_assert_eq(my_strcmp(str1, "HelloWorld"), 0);
}

Test(my_strcmp, different)
{
    cr_assert_eq(my_strcmp(str2, str3), 1);
}