//
// EPITECH PROJECT, 2019
// my_alphaisprint_test.c
// File description:
// my_alphaisprint_test.c
//

#include "my_test.h"
#include <criterion/criterion.h>

int res;

Test(my_alphaisprint, alpha_is_printable)
{
    cr_assert_eq(my_alphaisprint('c'), 0);
}

Test(my_alphaisprint, non_printable_caracter)
{
    cr_assert_eq(my_alphaisprint(0), 1);
}