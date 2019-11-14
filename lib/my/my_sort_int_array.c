/*
** EPITECH PROJECT, 2019
** my_sort_int_array.c
** File description:
** my_sort_int_array.c
*/

#include "../../include/my.h"

void swap_int(int *array, int i, int j)
{
    int save = 0;
    
    if (array[i] > array[j]) {
        save = array[i];
        array[i] = array[j];
        array[j] = save;
    }
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            swap_int(array, i, j);
        }
    }
}