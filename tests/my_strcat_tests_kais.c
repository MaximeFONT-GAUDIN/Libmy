#include "my_test.h"

#include <string.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strcat, expected_to_concat_the_strings)
{
    char str1[9] = "Yay";
    char *str2 = " yay.";
    char *test = my_strcat(str1, str2);

    cr_assert_str_eq(test, "Yay yay.");
    cr_assert_eq(str1, test);
}

Test(my_strcat, expected_to_return_empty_string)
{
    char str1[] = "";
    char *str2 = "";
    char *test = my_strcat(str1, str2);

    cr_assert_str_eq(test, "");
    cr_assert_eq(str1, test);
}

Test(my_strcat, expected_to_concat_the_strings_of_size_1)
{
    char str1[3] = "a";
    char *str2 = "b";
    char *test = my_strcat(str1, str2);

    cr_assert_str_eq(test, "ab");
    cr_assert_eq(str1, test);
}

Test(my_strcat, expected_to_concat_the_strings_with_one_empty_string)
{
    char str1[2] = "";
    char *str2 = "a";
    char *test = my_strcat(str1, str2);

    cr_assert_str_eq(test, "a");
    cr_assert_eq(str1, test);
}

Test(my_strcat, expected_to_concat_the_strings_with_the_other_empty_string)
{
    char str1[] = "a";
    char *str2 = "";
    char *test = my_strcat(str1, str2);

    cr_assert_str_eq(test, "a");
    cr_assert_eq(str1, test);
}
