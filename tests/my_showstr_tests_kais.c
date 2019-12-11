#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_showstr, should_print_the_given_string)
{
    cr_redirect_stdout();
    my_showstr("Hey");
    cr_assert_stdout_eq_str("Hey");
}

Test(my_showstr, should_print_the_new_line_in_hexa)
{
    cr_redirect_stdout();
    my_showstr("\n");
    cr_assert_stdout_eq_str("\\0a");
}

Test(my_showstr, should_print_bell_in_hexa)
{
    cr_redirect_stdout();
    my_showstr("\a");
    cr_assert_stdout_eq_str("\\07");
}

Test(my_showstr, should_print_tab_in_hexa)
{
    cr_redirect_stdout();
    my_showstr("\t");
    cr_assert_stdout_eq_str("\\09");
}

Test(my_showstr, should_print_the_non_printable_characters_in_hexa)
{
    cr_redirect_stdout();
    my_showstr("Hey\n\tComment ca va ?\v");
    cr_assert_stdout_eq_str("Hey\\0a\\09Comment ca va ?\\0b");
}
