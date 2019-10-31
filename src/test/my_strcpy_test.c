/*
** EPITECH PROJECT, 2019
** my_strcpy_test.c
** File description:
** my_strcpy_test.c
*/

#include <criterion/criterion.h>

char *str1 = "Hello World";
char str2[11];

Test(my_strcpy, in_allocated_string)
{
    my_strcpy(str1, str2);
    cr_assert_str_eq(str2, "Hello World");
}