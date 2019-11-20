/*
** EPITECH PROJECT, 2019
** my_strsep_test.c
** File description:
** my_strsep_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strsep, str_with_simple_delim)
{
    char *str = strdup("une phrase simple");

    cr_assert_str_eq(my_strsep(&str, " "), "une");
    cr_assert_str_eq(str, "phrase simple");
}

Test(my_strsep, str_with_multi_delim)
{
    char *str = strdup("on va utiliser une phrase un peu plus longue pour ce test");

    cr_assert_str_eq(my_strsep(&str, " eh"), "on");
    cr_assert_str_eq(str, "va utiliser une phrase un peu plus longue pour ce test");
}

Test(my_strsep, str_simple_delim_multi_call)
{
    char *str = strdup("cette fois ci une phrase qui permet beaucoup d'appel");

    cr_assert_str_eq(my_strsep(&str, " "), "cette");
    cr_assert_str_eq(my_strsep(&str, " "), "fois");
    cr_assert_str_eq(my_strsep(&str, " "), "ci");
    cr_assert_str_eq(my_strsep(&str, " "), "une");
    cr_assert_str_eq(my_strsep(&str, " "), "phrase");
    cr_assert_str_eq(my_strsep(&str, " "), "qui");
}

Test(my_strsep, str_multi_delim_multi_call)
{
    char *str = strdup("cette fois ci une phrase qui permet beaucoup d'appel et beacoup de delimiteur");

    cr_assert_str_eq(my_strsep(&str, " ef"), "c");
    cr_assert_str_eq(my_strsep(&str, " ef"), "tt");
    cr_assert_str_eq(my_strsep(&str, " ef"), "");
    cr_assert_str_eq(my_strsep(&str, " ef"), "");
    cr_assert_str_eq(my_strsep(&str, " ef"), "ois");
    cr_assert_str_eq(my_strsep(&str, " ef"), "ci");
}

Test(my_strsep, test_ptr_simple_call_simple_delim)
{
    char *str = strdup("une chaine de caracteres");
    char *save = str;

    cr_assert_eq(save, my_strsep(&str, " "));
}

Test(my_strsep, test_ptr_multi_call_simple_delim)
{
    char *str = strdup("une chaine de caracteres");
    char *save = str;

    cr_assert_eq(save, my_strsep(&str, " "));
    save = str;
    cr_assert_eq(save, my_strsep(&str, " "));
    save = str;
    cr_assert_eq(save, my_strsep(&str, " "));
    save = str;
    cr_assert_eq(save, my_strsep(&str, " "));
}

Test(my_strsep, test_ptr_multi_call_multi_delim)
{
    char *str = strdup("une chaine de caracteres");
    char *save = str;

    cr_assert_eq(save, my_strsep(&str, " ec"));
    save = str;
    cr_assert_eq(save, my_strsep(&str, " ec"));
    save = str;
    cr_assert_eq(save, my_strsep(&str, " ec"));
    save = str;
    cr_assert_eq(save, my_strsep(&str, " ec"));
}