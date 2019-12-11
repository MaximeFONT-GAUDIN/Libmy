#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_putstr, should_print_the_string_given_as_parameter)
{
    cr_redirect_stdout();
    my_putstr("Hey");
    cr_assert_stdout_eq_str("Hey");
}
