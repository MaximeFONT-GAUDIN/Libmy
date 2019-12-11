#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_str_islower, expected_1_for_lower_case_string)
{
    cr_assert(my_str_islower("bonsoir") == 1, "Should return 1 for full lowercase string.");
    cr_assert(my_str_islower("ooyeaha") == 1, "Should return 1 for full lowercase string.");
    cr_assert(my_str_islower("i") == 1, "Should return 1 for full lowercase string.");
    cr_assert(my_str_islower("aqwzsxedcrfvtgbyhnujikolpm") == 1, "Should return 1 for full lowercase string.");
}

Test(my_str_islower, expected_to_return_0_for_not_lower_case_string)
{
    cr_assert(my_str_islower("Bonsoir1") == 0, "Should return 0 for not full lowercase string.");
    cr_assert(my_str_islower("oOy\neaHA") == 0, "Should return 0 for not full lowercase string.");
    cr_assert(my_str_islower("AA\tA2AAA \tA") == 0, "Should return 0 for not full lowercase string.");
    cr_assert(my_str_islower("AAAAAA") == 0, "Should return 0 for not full lowercase string.");
}
