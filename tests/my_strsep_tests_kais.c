#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strsep, should_return_the_next_word_at_each_call)
{
    char *str = my_strdup("Hollow knight c'est bien.");
    char *save = str;

    cr_assert_str_eq(my_strsep(&str, " "), "Hollow");
    cr_assert_str_eq(my_strsep(&str, " "), "knight");
    cr_assert_str_eq(my_strsep(&str, " "), "c'est");
    cr_assert_str_eq(my_strsep(&str, " "), "bien.");
    cr_assert_null(my_strsep(&str, " "));
    free(save);
}

Test(my_strsep, should_return_null_at_each_call_after_the_end_of_the_string)
{
    char *str = my_strdup("Hollow knight c'est bien.");
    char *save = str;

    cr_assert_str_eq(my_strsep(&str, " "), "Hollow");
    cr_assert_str_eq(my_strsep(&str, " "), "knight");
    cr_assert_str_eq(my_strsep(&str, " "), "c'est");
    cr_assert_str_eq(my_strsep(&str, " "), "bien.");
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    cr_assert_null(my_strsep(&str, " "));
    free(save);
}

Test(my_strsep, should_return_null_at_each_call_after_the_first_one_if_string_doesnt_contain_delim)
{
    char *str = my_strdup("Hollow knight c'est bien.");
    char *save = str;

    cr_assert_str_eq(my_strsep(&str, "p"), "Hollow knight c'est bien.");
    cr_assert_null(my_strsep(&str, "p"));
    cr_assert_null(my_strsep(&str, "p"));
    cr_assert_null(my_strsep(&str, "p"));
    cr_assert_null(my_strsep(&str, "p"));
    free(save);
}
