#include "my_test.h"

#include <stdlib.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strdup, expected_to_duplicate_the_string)
{
    char str[6] = "Hello";
    char *dup = my_strdup(str);

    cr_assert(dup != str, "Dup should create a new string.");
    cr_assert_str_eq(str, dup);
    free(dup);
}

Test(my_strdup, expected_to_duplicate_the_3_characters_string)
{
    char str[] = "yay";
    char *dup = my_strdup(str);

    cr_assert(dup != str, "Dup should create a new string.");
    cr_assert_str_eq(str, dup);
    free(dup);
}

Test(my_strdup, expected_to_duplicate_the_characters_string)
{
    char str[] = "o";
    char *dup = my_strdup(str);

    cr_assert(dup != str, "Dup should create a new string.");
    cr_assert_str_eq(str, dup);
    free(dup);
}

Test(my_strdup, expected_to_duplicate_empty_string)
{
    char str[] = "";
    char *dup = my_strdup(str);

    cr_assert(dup != str, "Dup should create a new string.");
    cr_assert_str_eq(str, dup);
    free(dup);
}
