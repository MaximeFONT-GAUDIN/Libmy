/*
** EPITECH PROJECT, 2019
** my_strlowcase_test.c
** File description:
** my_strlowcase_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strlowcase, all_lowcase)
{
    char str[] = "JECRISENMINUSCULE";
    cr_assert_str_eq(my_strlowcase(str), "jecrisenminuscule");
    cr_assert_eq(str, my_strlowcase(str));
}

Test(my_strlowcase, sentence)
{
    char str[] = "J'ECRIS UNE PHRASE";
    cr_assert_str_eq(my_strlowcase(str), "j'ecris une phrase");
    cr_assert_eq(str, my_strlowcase(str));
}

Test(my_strlowcase, with_nbr)
{
    char str[] = "1 PHRASE AVEC DES CH1FFRES";
    cr_assert_str_eq(my_strlowcase(str), "1 phrase avec des ch1ffres");
    cr_assert_eq(str, my_strlowcase(str));
}

Test(my_strlowcase, with_upcase)
{
    char str[] = "une PhRase AVeC DEs MaJusCuLEs";
    cr_assert_str_eq(my_strlowcase(str), "une phrase avec des majuscules");
    cr_assert_eq(str, my_strlowcase(str));
}