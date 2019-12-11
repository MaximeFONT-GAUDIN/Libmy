#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_find_prime_sup, expected_to_return_the_next_prime_num)
{
    cr_assert_eq(my_find_prime_sup(1), 2);
    cr_assert_eq(my_find_prime_sup(6), 7);
}

Test(my_find_prime_sup, expected_to_return_the_same_as_input_if_it_is_already_prime)
{
    cr_assert_eq(my_find_prime_sup(2), 2);
    cr_assert_eq(my_find_prime_sup(7), 7);
}

Test(my_find_prime_sup, expected_to_return_2_for_int_inferior_to_2)
{
    cr_assert_eq(my_find_prime_sup(-20), 2);
    cr_assert_eq(my_find_prime_sup(-100), 2);
    cr_assert_eq(my_find_prime_sup(-1000), 2);
}
