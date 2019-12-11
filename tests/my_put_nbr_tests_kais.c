#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_put_nbr, should_print_5)
{
    cr_redirect_stdout();
    my_put_nbr(5);
    cr_assert_stdout_eq_str("5");
}

Test(my_put_nbr, should_print_0)
{
    cr_redirect_stdout();
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr, should_print_5050)
{
    cr_redirect_stdout();
    my_put_nbr(5050);
    cr_assert_stdout_eq_str("5050");
}

Test(my_put_nbr, should_print_minus_55)
{
    cr_redirect_stdout();
    my_put_nbr(-55);
    cr_assert_stdout_eq_str("-55");
}
