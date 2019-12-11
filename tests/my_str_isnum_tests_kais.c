#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_str_isnum, expected_1_for_num_string)
{
    cr_assert(my_str_isnum("1") == 1, "Should return 1 for full num string.");
    cr_assert(my_str_isnum("2") == 1, "Should return 1 for full num string.");
    cr_assert(my_str_isnum("000000000000") == 1, "Should return 1 for full num string.");
    cr_assert(my_str_isnum("99999") == 1, "Should return 1 for full num string.");
}

Test(my_str_isnum, expected_to_return_0_for_not_full_num_string)
{
    cr_assert(my_str_isnum("Bonsoir1") == 0, "Should return 0 for not full num string.");
    cr_assert(my_str_isnum("oOy\nea1HA") == 0, "Should return 0 for not full num string.");
    cr_assert(my_str_isnum("AA\tA2AAA \tA") == 0, "Should return 0 for not full num string.");
    cr_assert(my_str_isnum("AAAAAA") == 0, "Should return 0 for not full num string.");
    cr_assert(my_str_isnum("oooooo") == 0, "Should return 0 for not full num string.");
}
