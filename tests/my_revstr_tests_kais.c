#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <string.h>

#include "my_test.h"

Test(my_revstr, expected_to_reverse_the_string_for_impair_length)
{
    char to_reverse[] = "Hello !";

    cr_assert_str_eq(my_revstr(to_reverse), "! olleH");
    cr_assert_eq(my_revstr(to_reverse), to_reverse);
}

Test(my_revstr, expected_to_reverse_the_string_for_pair_length)
{
    char to_reverse[] = "coucou";

    cr_assert_str_eq(my_revstr(to_reverse), "uocuoc");
    cr_assert_eq(my_revstr(to_reverse), to_reverse);
}

Test(my_revstr, expected_to_return_an_empty_string)
{
    char to_reverse[] = "";

    cr_assert_str_eq(my_revstr(to_reverse), "");
    cr_assert_eq(my_revstr(to_reverse), to_reverse);
}

Test(my_revstr, expected_to_return_the_same_string)
{
    char to_reverse[] = "A";

    cr_assert_str_eq(my_revstr(to_reverse), "A");
    cr_assert_eq(my_revstr(to_reverse), to_reverse);
}

Test(my_revstr, expected_to_return_the_same_string_bis)
{
    char to_reverse[] = "AA";

    cr_assert_str_eq(my_revstr(to_reverse), "AA");
    cr_assert_eq(my_revstr(to_reverse), to_reverse);
}

Test(my_revstr, expected_to_return_the_same_string_for_palindrom_as_input)
{
    char to_reverse[] = "malayalam";

    cr_assert_str_eq(my_revstr(to_reverse), "malayalam");
    cr_assert_eq(my_revstr(to_reverse), to_reverse);
}
