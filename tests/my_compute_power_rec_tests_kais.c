#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_compute_power_rec, should_return_4_for_2_square_2)
{
    cr_assert(my_compute_power_rec(2, 2) == 4, "2**2 should return 4");
}

Test(my_compute_power_rec, should_return_0_for_neg_power)
{
    cr_assert(my_compute_power_rec(2, -1) == 0, "Expected 0 because a number power a negative number is between 0 and 1.");
}

Test(my_compute_power_rec, should_return_0_for_overflowing_output)
{
    cr_assert(my_compute_power_rec(10, 15) == 0, "Expected 0 because 10000000000000000 is over 9000");
}

Test(my_compute_power_rec, should_return_25_for_5_square_2)
{
    cr_assert(my_compute_power_rec(5, 2) == 25, "5**2 should return 25");
    cr_assert(my_compute_power_rec(5, 3) == 125, "5**3 should return 125");
}
