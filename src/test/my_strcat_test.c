/*
** EPITECH PROJECT, 2019
** my_strcat_test.c
** File description:
** my_strcat_test.c
*/

#include <criterion/criterion.h>

char *str1 = "Hello";
char *str2 = "World";

Test(my_strcat, concat_correctly)
{
    cr_assert_str_eq(my_strcat(str1, str2), "HelloWorld");
}