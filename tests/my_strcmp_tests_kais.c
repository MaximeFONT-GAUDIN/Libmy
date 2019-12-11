#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strcmp, expected_0_for_identical_strings)
{
    cr_assert(my_strcmp("Bonsoir.", "Bonsoir.") == 0, "Should return 0 for identic strings.");
    cr_assert(my_strcmp("a", "a") == 0, "Should return 0 for identic strings.");
    cr_assert(my_strcmp("", "") == 0, "Should return 0 for identic strings.");
}

Test(my_strcmp, expected_any_but_0_for_non_identical_strings)
{
    cr_assert(my_strcmp("Bonsoir.", "Bonsoir.") == 0, "Should return 0 for identic strings.");
    cr_assert(my_strcmp("a", "a") == 0, "Should return 0 for identic strings.");
    cr_assert(my_strcmp("", "") == 0, "Should return 0 for identic strings.");
}
