/*
** EPITECH PROJECT, 2019
** my_strtowordarray_test.c
** File description:
** my_strtowordarray_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>


Test(my_strtowordarray, compare_tab)
{
    char tab[4][10] = {"ceci", "est", "un", "tableau"};
    char **test = my_strtowordarray("ceci est un tableau", " ");
    
    cr_assert_arr_eq(test, tab, 0);
}

Test(my_strtowordarray, tab_with_two_separator)
{
    char tab[8][6] = {"j", "suis", "l", "pr", "mi", "r", "argum", "nt"};
    char **test = my_strtowordarray("je suis le premier argument", "e ");
    
    cr_assert_arr_eq(test, tab, 0);
}

Test(my_strtowordarray, multi_separator_at_start)
{
    char tab[3][7] = {"bonjour","le","monde"};
    char **test = my_strtowordarray("          bonjour le monde", " ");

    cr_assert_arr_eq(test, tab, 0);
}

Test(my_strtowordarray, multi_separator_at_end)
{
    char tab[3][7] = {"bonjour","le","monde"};
    char **test = my_strtowordarray("bonjour le monde            ", " ");

    cr_assert_arr_eq(test, tab, 0);
}