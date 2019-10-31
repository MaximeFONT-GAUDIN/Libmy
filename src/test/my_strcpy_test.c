/*
** EPITECH PROJECT, 2019
** my_strcpy_test.c
** File description:
** my_strcpy_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strcpy, in_allocated_string)
{
    char *str1 = "Hello World";
    char str2[11];

    my_strcpy(str1, str2);
    cr_assert_str_eq(str2, "Hello World");
}

Test(my_strcpy, cpy_in_bigger_container)
{
    char *str1 = "Bonjour Monde";
    char str2[100];

    my_strcpy(str1, str2);
    cr_assert_str_eq(str2, "Bonjour Monde");
}