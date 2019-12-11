#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_str_isupper, expected_1_for_upper_case_string)
{
    cr_assert(my_str_isupper("BONJOUR") == 1, "Should return 1 for full upper case string.");
    cr_assert(my_str_isupper("WHHA") == 1, "Should return 1 for full upper case string.");
    cr_assert(my_str_isupper("OVER") == 1, "Should return 1 for full upper case string.");
    cr_assert(my_str_isupper("OOOOOOOOOOOOOOOOOOOOOOOOO") == 1, "Should return 1 for full upper case string.");
}

Test(my_str_isupper, expected_to_return_0_for_not_full_upper_case_string)
{
    cr_assert(my_str_isupper("Bonsoir1") == 0, "Should return 0 for not full upper case string.");
    cr_assert(my_str_isupper("oOy\nea1HA") == 0, "Should return 0 for not full upper case string.");
    cr_assert(my_str_isupper("AA\tA2AAA \tA") == 0, "Should return 0 for not full upper case string.");
    cr_assert(my_str_isupper("AAaAAA") == 0, "Should return 0 for not full upper case string.");
    cr_assert(my_str_isupper("ooOooo") == 0, "Should return 0 for not full upper case string.");
}
