/*
** EPITECH PROJECT, 2019
** my_strcapitalize_test.c
** File description:
** my_strcapitalize_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strcapitalize, unique_world)
{
    char str[] = "bonjour";

    cr_assert_str_eq(my_strcapitalize(str), "Bonjour");
    cr_assert_eq(str, my_strcapitalize(str));
}

Test(my_strcapitalize, multi_world)
{
    char str[] = "bonjour je test mes programmes";

    cr_assert_str_eq(my_strcapitalize(str), "Bonjour Je Test Mes Programmes");
    cr_assert_eq(str, my_strcapitalize(str));
}

Test(my_strcapitalize, nbr_into_world)
{
    char str[] = "bonjour 43il y a des56chiffres ici";

    cr_assert_str_eq(my_strcapitalize(str), "Bonjour 43Il Y A Des56Chiffres Ici");
    cr_assert_eq(str, my_strcapitalize(str));
}

Test(my_strcapitalize, all_upper)
{
    char str[] = "UNE PHRASE TOUT EN MAJU-SCULE";

    cr_assert_str_eq(my_strcapitalize(str), "Une Phrase Tout En Maju-Scule");
    cr_assert_eq(str, my_strcapitalize(str));
}

Test(my_strcapitalize, empty_str)
{
    char str[] = "";

    cr_assert_str_eq(my_strcapitalize(str), "");
    cr_assert_eq(str, my_strcapitalize(str));
}

Test(my_strcapitalize, nimp)
{
    char str[] = "HeLlo wORld, how are you?";

    cr_assert_str_eq(my_strcapitalize(str), "Hello World, How Are You?");
    cr_assert_eq(str, my_strcapitalize(str));
}