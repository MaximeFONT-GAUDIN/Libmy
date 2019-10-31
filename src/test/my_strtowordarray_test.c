/*
** EPITECH PROJECT, 2019
** my_strtowordarray_test.c
** File description:
** my_strtowordarray_test.c
*/

#include <criterion/criterion.h>

char **tab = {"ceci", "est", "un", "tableau"};
char **test;

Test(my_strtowordarray, compare_tab)
{
    test = my_strtowordarray("ceci est un tableau", " ");
    cr_assert_arr_eq(test, tab, 0);
}