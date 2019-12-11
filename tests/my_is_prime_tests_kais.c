#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_is_prime, expected_to_return_1_for_known_primes)
{
    cr_assert(my_is_prime(2) == 1, "Should return 1 for prime as input 1");
    cr_assert(my_is_prime(3) == 1, "Should return 1 for prime as input 2");
    cr_assert(my_is_prime(5) == 1, "Should return 1 for prime as input 3");
    cr_assert(my_is_prime(7) == 1, "Should return 1 for prime as input 4");
}

Test(my_is_prime, expected_to_return_0_for_known_non_primes)
{
    cr_assert(my_is_prime(4) == 0, "Should return 1 for prime as input 1");
    cr_assert(my_is_prime(6) == 0, "Should return 1 for prime as input 2");
    cr_assert(my_is_prime(8) == 0, "Should return 1 for prime as input 3");
    cr_assert(my_is_prime(9) == 0, "Should return 1 for prime as input 4");
}
