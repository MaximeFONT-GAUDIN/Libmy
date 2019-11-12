/*
** EPITECH PROJECT, 2019
** my_showmem.c
** File description:
** my_showmem.c
*/

#include "my.h"

int my_showmem(char *str, int size)
{
    (void)str;
    (void)size;
    for (int i = -1; i != 25; i++) {
        my_put_nbr_base(i, "0123456789abcdef");
        printf("\ni=%d\n", i);
    }
    return (0);
}

int main(void)
{
    char *str = NULL;

    my_showmem(str, 12);
    return 0;
}