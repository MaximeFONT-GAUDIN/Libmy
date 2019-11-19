/*
** EPITECH PROJECT, 2019
** my_strncpy_test.c
** File description:
** my_strncpy_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strncpy, cpy_5)
{
    char *str1 = "Hello World!";
    char str2[5];
    int nb = 5;

    cr_assert_str_eq(my_strncpy(str2, str1, nb), "Hello");
    cr_assert_eq(str2, my_strncpy(str2, str1, nb));
}

Test(my_strncpy, cpy_bigger)
{
    char *str1 = "Hello";
    char str2[20];
    int nb = 20;

    cr_assert_str_eq(my_strncpy(str2, str1, nb), "Hello");
    cr_assert_eq(str2, my_strncpy(str2, str1, nb));
}

Test(my_strncy, empty_string)
{
    char *str1 = "";
    char str2[20];
    int nb = 3;

    my_strncpy(str2, str1, nb);
    cr_assert_str_empty(str2);
    cr_assert_eq(str2, my_strncpy(str2, str1, nb));
}



Test(my_strncpy, cpy_5_non_empty_string)
{
    char *str1 = "Hello World!";
    char str2[5] = "hey";
    int nb = 5;

    cr_assert_str_eq(my_strncpy(str2, str1, nb), "Hello");
    cr_assert_eq(str2, my_strncpy(str2, str1, nb));
}

Test(my_strncpy, cpy_bigger_non_empty_string)
{
    char *str1 = "Hello";
    char str2[20] = "hey hey";
    int nb = 20;

    cr_assert_str_eq(my_strncpy(str2, str1, nb), "Hello");
    cr_assert_eq(str2, my_strncpy(str2, str1, nb));
}

Test(my_strncpy, empty_string_non_empty_string)
{
    char *str1 = "";
    char str2[20] = "meme com que strcpy";
    int nb = 3;

    my_strncpy(str2, str1, nb);
    cr_assert_str_empty(str2);
    cr_assert_eq(str2, my_strncpy(str2, str1, nb));
}

Test(my_strncpy, non_empty_strinf_empty_string)
{
    char *str1 = "une phrase quelconque que je pause la";
    char str2[4] = "";
    int nb = 3;

    my_strncpy(str2, str1, nb);
    cr_assert_str_eq(str2, "une");
    cr_assert_eq(str2, my_strncpy(str2, str1, nb));
}

Test(my_strncpy, empty_nb)
{
    char *str1 = "une phrase pour les tester tous";
    char str2[35] = "une autre pour voir ce que ca fait";
    int nb = 0;

    my_strncpy(str2, str1, nb);
    cr_assert_str_eq(str2, "une autre pour voir ce que ca fait");
    cr_assert_eq(str2, my_strncpy(str2, str1, nb));
}

Test(my_strncpy, all_str_empty)
{
    char *str1 = "";
    char str2[4] = "";
    int nb = 2;

    my_strncpy(str2, str1, nb);
    cr_assert_str_empty(str2);
    cr_assert_eq(str2, my_strncpy(str2, str1, nb));
}

Test(my_strncpy, all_empty)
{
    char *str1 = "";
    char str2[0] = "";
    int nb = 0;

    my_strncpy(str2, str1, nb);
    cr_assert_str_empty(str2);
    cr_assert_eq(str2, my_strncpy(str2, str1, nb));
}

Test(my_strncpy, negativ_nb)
{
    char *str1 = "un caractere";
    char str2[15] = "";
    int nb = -2;

    my_strncpy(str2, str1, nb);
    cr_assert_str_empty(str2);
    cr_assert_eq(str2, my_strncpy(str2, str1, nb));
}