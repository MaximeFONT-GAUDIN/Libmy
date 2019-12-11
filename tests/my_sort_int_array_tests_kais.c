#include "my_test.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void compare_int_arrays(int *array, int *to_compare, int size)
{
    if (array == NULL && to_compare == NULL)
        return;
    for (int i = 0; i < size; i++)
    {
        cr_assert(array[i] == to_compare[i], "Each element must be equal.");
    }
}

Test(my_sort_int_array, should_do_nothing_for_already_sorted_list)
{
    int array_size = 3;
    int *array = malloc(sizeof(int) * array_size);
    int *tmp = malloc(sizeof(int) * array_size);
    array[0] = 0;
    array[1] = 1;
    array[2] = 2;
    tmp[0] = 0;
    tmp[1] = 1;
    tmp[2] = 2;

    my_sort_int_array(array, array_size);
    compare_int_arrays(array, tmp, array_size);
    free(array);
    free(tmp);
}

Test(my_sort_int_array, should_return_size_1_list_with_same_content)
{
    int array_size_1 = 1;
    int *array_1 = malloc(sizeof(int) * array_size_1);
    int *tmp_1 = malloc(sizeof(int) * array_size_1);
    array_1[0] = 1;
    tmp_1[0] = 1;

    my_sort_int_array(array_1, array_size_1);
    compare_int_arrays(array_1, tmp_1, array_size_1);
    free(array_1);
    free(tmp_1);
}

Test(my_sort_int_array, should_not_crash_on_null_input)
{
    int array_size_1 = 1;
    int *array_1 = NULL;
    int *tmp_1 = NULL;

    my_sort_int_array(array_1, array_size_1);
    compare_int_arrays(array_1, tmp_1, array_size_1);
}

Test(my_sort_int_array, should_sort_the_lists)
{
    int array_size = 3;
    int *array = malloc(sizeof(int) * array_size);
    int *tmp = malloc(sizeof(int) * array_size);
    array[0] = 1;
    array[1] = 0;
    array[2] = 2;
    tmp[0] = 0;
    tmp[1] = 1;
    tmp[2] = 2;

    my_sort_int_array(array, array_size);
    compare_int_arrays(array, tmp, array_size);
    free(array);
    free(tmp);
}
