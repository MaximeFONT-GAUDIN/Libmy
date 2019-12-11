#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_compute_square_root, should_return_square_root_of_input)
{
    cr_assert(my_compute_square_root(4) == 2, "root of 4 = 2");
    cr_assert(my_compute_square_root(100) == 10, "root of 100 = 10");
    cr_assert(my_compute_square_root(25) == 5, "root of 25 = 5");
    cr_assert(my_compute_square_root(9) == 3, "root of 9 = 3");
}

Test(my_compute_square_root, should_return_0_for_float_result)
{
    cr_assert(my_compute_square_root(2) == 0, "root of 2 = 2^1/2");
    cr_assert(my_compute_square_root(5) == 0, "root of 5 = 5^1/2");
    cr_assert(my_compute_square_root(7) == 0, "root of 7 = 7^1/2");
    cr_assert(my_compute_square_root(3) == 0, "root of 3 = 3^1/2");
}

Test(my_compute_square_root, should_return_0_for_negative_input)
{
    cr_assert(my_compute_square_root(-4) == 0, "Impossible to square a negative number");
    cr_assert(my_compute_square_root(-100) == 0, "Impossible to square a negative number");
    cr_assert(my_compute_square_root(-25) == 0, "Impossible to square a negative number");
    cr_assert(my_compute_square_root(-9) == 0, "Impossible to square a negative number");
}
