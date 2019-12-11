#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_putchar, should_print_A)
{
    cr_redirect_stdout();
    my_putchar('A');
    cr_assert_stdout_eq_str("A");
}

Test(my_putchar, should_print_B)
{
    cr_redirect_stdout();
    my_putchar('B');
    cr_assert_stdout_eq_str("B");
}

Test(my_putchar, should_print_C)
{
    cr_redirect_stdout();
    my_putchar('C');
    cr_assert_stdout_eq_str("C");
}
