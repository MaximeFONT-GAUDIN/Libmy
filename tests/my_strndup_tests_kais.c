#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strndup, expected_to_duplicate_n_characters)
{
    char str[6] = "Hello";
    char *dup = my_strndup(str, 5);

    cr_assert(dup != str, "Dup should create a new string.");
    cr_assert_str_eq(str, dup);
    free(dup);
}

Test(my_strndup, expected_to_duplicate_3_characters)
{
    char str[6] = "Hello";
    char *dup = my_strndup(str, 3);

    cr_assert(dup != str, "Dup should create a new string.");
    cr_assert_str_eq("Hel", dup);
    free(dup);
}
