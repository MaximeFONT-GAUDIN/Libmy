/*
** EPITECH PROJECT, 2019
** my_strlen_test.c
** File description:
** my_strlen_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

char *str1 = "Hello World";
char *str2 = "difference";
int len = 11;

Test(my_strlen, the_same)
{
    cr_assert_eq(strlen(str1), my_strlen(str1));
}

Test(my_strlen, difference)
{
    cr_assert_neq(my_strlen(str1), my_strlen(str2));
}