#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_str_isprintable, expected_to_return_0_for_printable_string_as_input)
{
    cr_assert(my_str_isprintable("UuU") == 1, "Should return 1 for my_compute_power_rec_testsprintable string as input.");
    cr_assert(my_str_isprintable("AAAAAAAAAAAAAAAAAAAAAA") == 1, "Should return 1 for printable string as input.");
    cr_assert(my_str_isprintable("oooooooooooooooooooooooo") == 1, "Should return 1 for printable string as input.");
    cr_assert(my_str_isprintable("azertyuiopqsdfghjklmwxcvbn") == 1, "Should return 1 for printable string as input.");
}

Test(my_str_isprintable, expected_to_return_1_for_printable_string_as_input)
{
    cr_assert(my_str_isprintable("\t\tBonsoir,") == 0, "Should return 0 for printable string as input.");
    cr_assert(my_str_isprintable("\tBonsoir,") == 0, "Should return 0 for printable string as input.");
    cr_assert(my_str_isprintable("Gg\t") == 0, "Should return 0 for printable string as input.");
    cr_assert(my_str_isprintable("o\nO") == 0, "Should return 0 for printable string as input.");
    cr_assert(my_str_isprintable(NULL) == 0, "Should return 0 for printable string as input.");
}