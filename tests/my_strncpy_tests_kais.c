#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strncpy, expected_to_copy_n_characters_from_src)
{
    char src[] = "monsieur";
    char dest[9];
    char *res = my_strncpy(dest, src, 8);

    cr_assert_str_eq("monsieur", res);
    cr_assert_eq(dest, res);
}

Test(my_strncpy, expected_to_copy_n_characters_from_src_1)
{
    char src[] = "monsieur";
    char dest[4];
    char *res = my_strncpy(dest, src, 3);

    cr_assert_str_eq("mon", res);
    cr_assert_eq(dest, res);
}
