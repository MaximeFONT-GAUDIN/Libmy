#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_str_isalpha, expected_to_return_1_for_full_alpha_str)
{
    cr_assert(my_str_isalpha("Bonsoir") == 1, "Should return 1 for full alpha string.");
    cr_assert(my_str_isalpha("oOyeaHA") == 1, "Should return 1 for full alpha string.");
    cr_assert(my_str_isalpha("AAAAAAA") == 1, "Should return 1 for full alpha string.");
    cr_assert(my_str_isalpha("aaaaaaa") == 1, "Should return 1 for full alpha string.");
}

Test(my_str_isalpha, expected_to_return_0_for_not_full_alpha_str)
{
    cr_assert(my_str_isalpha("Bonsoir1") == 0, "Should return 1 for full alpha string.");
    cr_assert(my_str_isalpha("oOy\neaHA") == 0, "Should return 1 for full alpha string.");
    cr_assert(my_str_isalpha("AA\tA2AAA \tA") == 0, "Should return 1 for full alpha string.");
    cr_assert(my_str_isalpha("aaaa^^^^aaa") == 0, "Should return 1 for full alpha string.");
}
