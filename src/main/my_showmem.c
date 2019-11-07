/*
** EPITECH PROJECT, 2019
** my_showmem.c
** File description:
** my_showmem.c
*/

#include "my.h"

void put_spaces(int size)
{
    for (int i = 0; i != 16 - size; i++) {
        my_putstr("  ");
        if (i % 2 == 0)
            my_putchar(' ');
    }
}

int first_loop(int i, char *str, int space)
{
    if (space % 2 == 0 && space != 0)
        my_putchar(' ');
    if (str[i] == 0)
        my_putstr("00");
    if (str[i] <= 15 && str[i] != 0) {
        // my_putchar('|');
        my_putchar('0');
    }
    my_put_nbr_base(str[i], "0123456789abcdef");
    if (str[i] <= 15 && str[i] != 0)
        // my_putchar('|');
    space++;
    return (space);
}

void printable_char(char *str, int size)
{
    int space = 0;
    
    for (int i = 0; i != size; i++) {
        space = first_loop(i, str, space);
    }
    if (size < 16)
        put_spaces(size);
    my_putchar(' ');
    for (int i = 0; i != size; i++) {
        if (my_alphaisprint(str[i]) == 1) {
            my_putchar('.');
            continue;
        }
        my_putchar(str[i]);
    }
    my_putchar('\n');
}

int my_showmem(char *str, int size)
{
    int spire = 0;
    int save_size = size;

    if (size % 16 != 0)
        spire = 1;
    for (int i = 0; i != save_size / 16 + spire; i++) {
        if (size >= 16)
            printable_char(str, 16);
        else
            printable_char(str, size);
        str = str + 16;
        size = size - 16;
    }
    return (0);
}

// int main(void)
// {
//     my_showmem("putain fonctionne stp", 85);
//     return 0;
// }