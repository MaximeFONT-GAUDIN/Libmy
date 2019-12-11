#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strstr, expected_to_return_the_string_after_the_patern)
{
    char str[] = "Bonsoir monsieur le monarque.";

    cr_assert_str_eq("monsieur le monarque.", my_strstr(str, "mon"));
}

Test(my_strstr, expected_to_return_NULL)
{
    char str[] = "";

    cr_assert(NULL == my_strstr(str, "mon"), "Should return null.");
}
