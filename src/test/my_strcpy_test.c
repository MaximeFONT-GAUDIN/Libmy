/*
** EPITECH PROJECT, 2019
** my_strcpy_test.c
** File description:
** my_strcpy_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strcpy, in_allocated_string)
{
    char *src = "Hello World";
    char dest[11];

    my_strcpy(dest, src);
    cr_assert_str_eq(dest, "Hello World");
}

Test(my_strcpy, cpy_in_bigger_container)
{
    char *src = "Bonjour Monde";
    char dest[100];

    my_strcpy(dest, src);
    cr_assert_str_eq(dest, "Bonjour Monde");
}

Test(my_strcpy, pointer_return)
{
    char *src = "Bonjour";
    char dest[100];
    char *r = my_strcpy(dest, src);

    cr_assert_eq(r, dest);
}

Test(my_strcpy, empty_string)
{
    char *src = "";
    char dest[100];
    
    my_strcpy(dest, src);
    cr_assert_str_empty(dest);
}



Test(my_strcpy, in_allocated_string_non_empty_string)
{
    char *src = "Hello World";
    char dest[11] = "hey";

    my_strcpy(dest, src);
    cr_assert_str_eq(dest, "Hello World");
}

Test(my_strcpy, cpy_in_bigger_container_non_empty_string)
{
    char *src = "Bonjour Monde";
    char dest[100] = "ici on met une plus longue string qu'avant";

    my_strcpy(dest, src);
    cr_assert_str_eq(dest, "Bonjour Monde");
}

Test(my_strcpy, pointer_return_non_empty_string)
{
    char *src = "Bonjour";
    char dest[100] = "ici aussi une longue string non vide";
    char *r = my_strcpy(dest, src);

    cr_assert_eq(r, dest);
}

Test(my_strcpy, empty_string_non_empty_string)
{
    char *src = "";
    char dest[100] = "deja de base je comprend pas pk copier une string vide alors la copier dans une string remplie...";
    
    my_strcpy(dest, src);
    cr_assert_str_empty(dest);
}