/*
** EPITECH PROJECT, 2019
** my_strupcase_test.c
** File description:
** my_strupcase_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strupcase, all_lowcase)
{
    cr_assert_str_eq(my_strupcase("jecrisenminuscule"), "JECRISENMINUSCULE");
}

Test(my_strupcase, sentence)
{
    cr_assert_str_eq(my_strupcase("j'ecris une phrase"), "J'ECRIS UNE PHRASE");
}

Test(my_strupcase, with_nbr)
{
    cr_assert_str_eq(my_strupcase("1 phrase avec des ch1ffres"), "1 PHRASE AVEC DES CH1FFRES");
}

Test(my_strupcase, with_upcase)
{
    cr_assert_str_eq(my_strupcase("Une Phrase aVec dES mAJUSCULEs"), "UNE PHRASE AVEC DES MAJUSCULES");
}