#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strncat, expected_to_concatenate)
{
    char *src = "monsieur";
    char dest[17] = "Bonjour ";
    char *res = my_strncat(dest, src, 8);

    cr_assert_str_eq("Bonjour monsieur", res);
    cr_assert_eq(dest, res);
}

Test(my_strncat, expected_to_concatenate_n_characters)
{
    char *src = "monsieur";
    char dest[16] = "Bonjour ";
    char *res = my_strncat(dest, src, 2);

    cr_assert_str_eq("Bonjour mo", res);
    cr_assert_eq(dest, res);
}
