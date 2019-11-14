/*
** EPITECH PROJECT, 2019
** my_sort_int_array_test.c
** File description:
** my_sort_int_array_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_sort_int_array, array_sort)
{
    int array[5] = {1, 2, 3, 4, 5};
    int test[5] = {1, 2, 3, 4, 5};

    my_sort_int_array(array, 5);
    cr_assert_arr_eq(array, test, 0);
}

Test(my_sort_int_array, sort_array)
{
    int array[5] = {5, 4, 3, 2, 1};
    int test[5] = {1, 2, 3, 4, 5};

    my_sort_int_array(array, 5);
    cr_assert_arr_eq(array, test, 0);
}

Test(my_sort_int_array, dirty_array)
{
    int array[5] = {8, 3, 0, 45, -7};
    int test[5] = {-7, 0, 3, 8, 45};

    my_sort_int_array(array, 5);
    cr_assert_arr_eq(array, test, 0);
}

Test(my_sort_int_array, empty_array)
{
    int array[0];
    int test[0];

    my_sort_int_array(array, 0);
    cr_assert_arr_eq(array, test, 0);
}