#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_swap, should_swap_the_two_values)
{
    int a = 3;
    int b = 18;

    my_swap(&a, &b);
    cr_assert(a == 18, "A should be equal to 18");
    cr_assert(b == 3, "A should be equal to 3");
}
