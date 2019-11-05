/*
** EPITECH PROJECT, 2019
** my_strncat_test.c
** File description:
** my_strncat_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strncat, correct)
{
    char *src = "World";
    char dest[11] = "Hello";

    cr_assert_str_eq(my_strncat(dest, src, 5), "HelloWorld");
}

Test(my_strncat, too_big)
{
    char *src = "c'est vraiment tres tres grand";
    char dest[50] = "quelque chose de vraiment trop grand ";

    cr_assert_str_eq(my_strncat(dest, src, 10), "quelque chose de vraiment trop grand c'est vrai");
}

Test(my_strncat, the_good_pointer)
{
    char *src = "au pif";
    char dest[10] = "ois";
    char *r = my_strncat(dest, src, 2);

    cr_assert_eq(r, dest);
}