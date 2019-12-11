#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_isneg, should_print_P)
{
    cr_redirect_stdout();
    my_isneg(5);
    cr_assert_stdout_eq_str("P");
}

Test(my_isneg, should_print_P_bis)
{
    cr_redirect_stdout();
    my_isneg(1000);
    cr_assert_stdout_eq_str("P");
}

Test(my_isneg, should_print_N)
{
    cr_redirect_stdout();
    my_isneg(-6);
    cr_assert_stdout_eq_str("N");
}

Test(my_isneg, should_print_N_bis)
{
    cr_redirect_stdout();
    my_isneg(-1000);
    cr_assert_stdout_eq_str("N");
}
