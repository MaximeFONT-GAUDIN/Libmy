#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strlen, should_write_the_nums)
{
    cr_expect(my_strlen("") == 0, "Expected 0 for an empty string.");
    cr_expect(my_strlen("A") == 1, "Expected 0 for an empty string.");
    cr_expect(my_strlen(NULL) == 0, "Expected 0 for an empty string.");
}
