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
    cr_assert_str_eq(my_strlowcase("JECRISENMINUSCULE"), "jecrisenminuscule");
}

Test(my_strlowcase, sentence)
{
    cr_assert_str_eq(my_strlowcase("J'ECRIS UNE PHRASE"), "j'ecris une phrase");
}

Test(my_strlowcase, with_nbr)
{
    cr_assert_str_eq(my_strlowcase("1 PHRASE AVEC DES CH1FFRES"), "1 phrase avec des ch1ffres");
}

Test(my_strlowcase, with_upcase)
{
    cr_assert_str_eq(my_strlowcase("une PhRase AVeC DEs MaJusCuLEs"), "une phrase avec des majuscules");
}