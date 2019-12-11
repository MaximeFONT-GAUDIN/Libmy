#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strcapitalize, expected_to_capitalize_input)
{
    char str[] = "o o o o";
    char *capitalize_str = my_strcapitalize(str);

    cr_assert_str_eq(capitalize_str, "O O O O", "Should turn the 'o' into 'O'");
    cr_assert_eq(str, capitalize_str);
}

Test(my_strcapitalize, expected_to_capitalize_input_1)
{
    char str[] = "Et on fait tourner les serviettes !";
    char *capitalize_str = my_strcapitalize(str);

    cr_assert_str_eq(capitalize_str, "Et On Fait Tourner Les Serviettes !", "Should capitalize the string.");
    cr_assert_eq(str, capitalize_str);
}

Test(my_strcapitalize, expected_to_lower_upper_characters)
{
    char str[] = "ET ON FAIT TOURNER LES SERVIETTES !";
    char *capitalize_str = my_strcapitalize(str);

    cr_assert_str_eq(capitalize_str, "Et On Fait Tourner Les Serviettes !", "Should capitalize the string.");
    cr_assert_eq(str, capitalize_str);
}

Test(my_strcapitalize, expected_to_lower_upper_characters_and_so)
{
    char str[] = "eT oN fAIT tOURNER lES sERVIETTES !";
    char *capitalize_str = my_strcapitalize(str);

    cr_assert_str_eq(capitalize_str, "Et On Fait Tourner Les Serviettes !", "Should capitalize the string.");
    cr_assert_eq(str, capitalize_str);
}
