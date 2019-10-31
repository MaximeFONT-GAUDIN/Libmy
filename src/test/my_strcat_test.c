/*
** EPITECH PROJECT, 2019
** my_strcat_test.c
** File description:
** my_strcat_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_strcat, concat_correctly)
{
    char *str1 = "Hello";
    char *str2 = "World";
    
    cr_assert_str_eq(my_strcat(str1, str2), "HelloWorld");
}

Test(my_strcat, concat_different_size)
{
    char *str1 = "Little";
    char *str2 = "Big";

    cr_assert_str_eq(my_strcat(str1, str2), "LittleBig");
}