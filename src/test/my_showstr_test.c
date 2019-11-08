/*
** EPITECH PROJECT, 2019
** my_showstr_test.c
** File description:
** my_showstr_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_showstr, simple_sentence)
{
    cr_redirect_stdout();
    my_showstr("bonjour je fais un test");
    cr_assert_stdout_eq_str("bonjour je fais un test");
}

Test(my_showstr, with_non_printable_char)
{
    cr_redirect_stdout();
    my_showstr("bonjour \n je fai\tt des tests\f");
    cr_assert_stdout_eq_str("bonjour \\0a je fai\\09t des tests\\0c");
}

Test(my_showstr, only_one_char_printable)
{
    cr_redirect_stdout();
    my_showstr("a");
    cr_assert_stdout_eq_str("a");
}

Test(my_showstr, only_only_one_char_non_printable)
{
    char str[2];

    str[0] = 31;
    cr_redirect_stdout();
    my_showstr(str);
    cr_assert_stdout_eq_str("\\1f");
}

// Test(my_showstr, empty_str)
// {
//     char str[] = "";

//     cr_redirect_stdout();
//     my_showstr(str);
//     cr_assert_stdout_eq_str("");
// }