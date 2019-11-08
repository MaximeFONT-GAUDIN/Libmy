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
    char str1[] = "jecrisenminuscule";
    
    cr_assert_str_eq(my_strupcase(str1), "JECRISENMINUSCULE");
    cr_assert_eq(str1, my_strupcase(str1));
}

Test(my_strupcase, sentence)
{
    char str1[] = "j'ecris une phrase";
    
    cr_assert_str_eq(my_strupcase(str1), "J'ECRIS UNE PHRASE");
    cr_assert_eq(str1, my_strupcase(str1));
}

Test(my_strupcase, with_nbr)
{
    char str1[] = "1 phrase avec des ch1ffres";
    
    cr_assert_str_eq(my_strupcase(str1), "1 PHRASE AVEC DES CH1FFRES");
    cr_assert_eq(str1, my_strupcase(str1));
}

Test(my_strupcase, with_upcase)
{
    char str1[] = "Une Phrase aVec dES mAJUSCULEs";
    
    cr_assert_str_eq(my_strupcase(str1), "UNE PHRASE AVEC DES MAJUSCULES");
    cr_assert_eq(str1, my_strupcase(str1));
}

Test(my_strupcase, empty_string)
{
    char str1[] = "";
    
    cr_assert_str_eq(my_strupcase(str1), "");
    cr_assert_eq(str1, my_strupcase(str1));
}