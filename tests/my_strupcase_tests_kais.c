#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strupcase, expected_to_return_low_case_str)
{
    char str[] = "Heeeeey !";
    char *str_low_case = my_strupcase(str);

    cr_assert_str_eq(str_low_case, "HEEEEEY !", "Should turn the 'h' into a 'H'");
    cr_assert_eq(str, str_low_case);
}

Test(my_strupcase, expected_to_return_low_case_str_1)
{
    char str[] = "ooo";
    char *str_low_case = my_strupcase(str);

    cr_assert_str_eq(str_low_case, "OOO", "Should turn the 'o' into 'O'");
    cr_assert_eq(str, str_low_case);
}