/*
** EPITECH PROJECT, 2019
** main_test.c
** File description:
** main_test.c
*/

#include <criterion/criterion.h>

char *str = "Hello World";
unsigned int len = 11;

Test(size, is_the_same)
{
    cr_assert(strlen(str) == len);
}

Test(size, is_the_same_v2)
{
    cr_assert_eq(strlen(str), len);
}

Test(size, is_different)
{
    cr_assert_not(strlen(str) != len);
}