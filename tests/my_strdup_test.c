/*
** EPITECH PROJECT, 2019
** my_strdup_test.c
** File description:
** my_strdup_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strdup, filled_string, .init = my_malloc_success)
{
    char str[] = "une string rempli";
    char *res = my_strdup(str);

    cr_assert_str_eq(str, res);
    cr_assert_neq(str, res);

    free(res);
}

Test(my_strdup, empty_string, .init = my_malloc_success)
{
    char str[] = "";
    char *res = my_strdup(str);
    
    cr_assert_str_empty(res);
    cr_assert_neq(str, res);

    free(res);
}

Test(my_strdup, malloc_failure, .init = my_malloc_failure)
{
    cr_assert_null(my_strdup("failure"));
}