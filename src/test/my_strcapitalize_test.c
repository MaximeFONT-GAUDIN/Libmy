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
    char *str = "bonjour";

    cr_assert_str_eq(my_strcapitalize(str), "Bonjour");
}

Test(my_strcapitalize, multi_world)
{
    cr_assert_str_eq(my_strcapitalize("bonjour je test mes programmes"), "Bonjour Je Test Mes Programmes");
}

Test(my_strcapitalize, nbr_into_world)
{
    cr_assert_str_eq(my_strcapitalize("bonjour 43il y a des56chiffres ici"), "Bonjour 43Il Y A Des56Chiffres Ici");
}

Test(my_strcapitalize, all_upper)
{
    cr_assert_str_eq(my_strcapitalize("UNE PHRASE TOUT EN MAJUSCULE"), "UNE PHRASE TOUT EN MAJUSCULE");
}