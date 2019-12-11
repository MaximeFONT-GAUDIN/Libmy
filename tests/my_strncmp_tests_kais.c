#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strncmp, expected_to_return_a_negative_num)
{
    char src[] = "monsieur";
    char dest[16] = "monskeur";

    cr_assert(my_strncmp(dest, src, 8) > 0, "Should return a negative number for different strings as input.");
}

Test(my_strncmp, expected_to_return_a_negative_num_2)
{
    char src[] = "monsieur";
    char dest[16] = "monskeur";

    cr_assert(my_strncmp(dest, src, 5) > 0, "Should return a negative number for different strings as input.");
}

Test(my_strncmp, expected_to_return_a_positive_num)
{
    char src[] = "monsieur";
    char dest[16] = "monsheur";

    cr_assert(my_strncmp(dest, src, 8) < 0, "Should return a positive number for identic strings as input.");
}

Test(my_strncmp, expected_to_return_a_positive_num_2)
{
    char src[] = "monsieur";
    char dest[16] = "monsheur";

    cr_assert(my_strncmp(dest, src, 5) < 0, "Should return a positive number for identic strings as input.");
}

Test(my_strncmp, expected_to_return_0)
{
    char src[] = "monsieur";
    char dest[16] = "monsieur";

    cr_assert(my_strncmp(dest, src, 8) == 0, "Should return 0 for identic strings");
}

Test(my_strncmp, expected_to_return_0_2)
{
    char src[] = "monsieur";
    char dest[16] = "monsiour";

    cr_assert(my_strncmp(dest, src, 4) == 0, "Should return a positive number for identic strings as input.");
}
