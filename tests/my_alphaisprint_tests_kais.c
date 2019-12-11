#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_alphaisprint, expected_to_return_1)
{
    cr_assert(my_alphaisprint(0) == 1, "Expected to return 1 with '0' as input.");
    cr_assert(my_alphaisprint(1) == 1, "Expected to return 1 with '1' as input.");
    cr_assert(my_alphaisprint(2) == 1, "Expected to return 1 with '2' as input.");
    cr_assert(my_alphaisprint(3) == 1, "Expected to return 1 with '3' as input.");
    cr_assert(my_alphaisprint(4) == 1, "Expected to return 1 with '4' as input.");
    cr_assert(my_alphaisprint(5) == 1, "Expected to return 1 with '5' as input.");
    cr_assert(my_alphaisprint(6) == 1, "Expected to return 1 with '6' as input.");
    cr_assert(my_alphaisprint(7) == 1, "Expected to return 1 with '7' as input.");
    cr_assert(my_alphaisprint(8) == 1, "Expected to return 1 with '8' as input.");
    cr_assert(my_alphaisprint(9) == 1, "Expected to return 1 with '9' as input.");
}

Test(my_alphaisprint, expected_to_return_0)
{
    cr_assert(my_alphaisprint(56) == 0, "Expected to return 0 with '56' as input.");
    cr_assert(my_alphaisprint(57) == 0, "Expected to return 0 with '57' as input.");
    cr_assert(my_alphaisprint(58) == 0, "Expected to return 0 with '58' as input.");
    cr_assert(my_alphaisprint(59) == 0, "Expected to return 0 with '59' as input.");
    cr_assert(my_alphaisprint(60) == 0, "Expected to return 0 with '60' as input.");
    cr_assert(my_alphaisprint(61) == 0, "Expected to return 0 with '61' as input.");
    cr_assert(my_alphaisprint(62) == 0, "Expected to return 0 with '62' as input.");
    cr_assert(my_alphaisprint(63) == 0, "Expected to return 0 with '63' as input.");
    cr_assert(my_alphaisprint(64) == 0, "Expected to return 0 with '64' as input.");
    cr_assert(my_alphaisprint(65) == 0, "Expected to return 0 with '65' as input.");
}
