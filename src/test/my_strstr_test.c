/*
** EPITECH PROJECT, 2019
** my_strstr_test.c
** File description:
** my_strstr_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strstr, correct)
{
    char *str = "je dois chercher une chaine de caractere dans cette chaine de caractere";
    char *r = my_strstr(str, "dois");

    cr_assert_eq(r, str + 3);
}

Test(my_strstr, without_occurence)
{
    char *str = "je dois chercher une chaine de caractere dans cette chaine de caractere";
    char *r = my_strstr(str, "salut");

    cr_assert_eq(NULL, r);
}

Test(my_strstr, with_multiple_occurence)
{
    char *str = "je dois chercher une chaine de caractere dans cette chaine de caractere";
    char *r = my_strstr(str, "chaine");

    cr_assert_eq(r, str + 21);
}

Test(my_strstr, empty_str)
{
    char *str = "";
    char *r = my_strstr(str, "dois");

    cr_assert_eq(r, NULL);
}

Test(my_strstr, ocurrence_is_the_first)
{
    char *str = "je dois chercher une chaine de caractere dans cette chaine de caractere";
    char *r = my_strstr(str, "je");

    cr_assert_eq(r, str);
}

Test(my_strstr, occurence_is_the_last)
{
    char *str = "je dois chercher une chaine de caratere dans cette chaine de caractere";
    char *r = my_strstr(str, "ctere");

    cr_assert_eq(r, str + 65);
}

Test(my_strstr, find_empty_string)
{
    char *str = "on va charcher une empty string ici";
    char *r = my_strstr(str, "");

    cr_assert_eq(r, NULL);
}

Test(my_strstr, find_NULL_string)
{
    char *str = "on va charcher une empty string ici";
    char *r = my_strstr(str, NULL);

    cr_assert_eq(r, NULL);
}