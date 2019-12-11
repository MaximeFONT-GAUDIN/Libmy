#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strlowcase, expected_to_return_low_case_str)
{
    char str[] = "Heeeeey !";
    char *str_low_case = my_strlowcase(str);

    cr_assert_str_eq(str_low_case, "heeeeey !", "Should turn the 'H' into a 'h'");
    cr_assert_eq(str, str_low_case);
}

Test(my_strlowcase, expected_to_return_low_case_str_1)
{
    char str[] = "OOO";
    char *str_low_case = my_strlowcase(str);

    cr_assert_str_eq(str_low_case, "ooo", "Should turn the 'O' into 'o'");
    cr_assert_eq(str, str_low_case);
}
