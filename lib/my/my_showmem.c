/*
** EPITECH PROJECT, 2019
** my_showmem.c
** File description:
** my_showmem.c
*/

#include "../../include/my.h"

int my_put_nbr_base_scd_column(int nb, char *base)
{
    int size_base = my_strlen(base);

    if (size_base < 2)
        return (0);
    if (nb < 0) {
        nb = nb * - 1;
    }
    if (nb >= size_base)
        my_put_nbr_base_scd_column(nb / size_base, base);
    my_putchar(base[nb % size_base]);
    return (0);
}

char *my_put_nbr_base_it(int nb, char *base)
{
    int size_base = my_strlen(base);
    char *res = malloc(8);
    int j = 7;

    for (int i = 0; i != 8; i++)
        res[i] = '0';
    if (size_base < 2)
        return (NULL);
    for (; nb != 0;) {
        if (nb < size_base) {
            res[j] = base[nb];
            return (res);
        }
        if (nb >= size_base) {
            res[j] = base[nb % size_base];
            nb = nb / size_base;
            j--;
        }
    }
    res[8] = 0;
    return (res);
}

void print_left_column(int i)
{
    my_putstr(my_put_nbr_base_it(i, "0123456789abcdef"));
    my_putstr(": ");
}

void print_middle_column(char *str, int size)
{
    for (int i = 0; i != size; i++) {
        if (str[i] < 16) {
            my_putchar('0');
        }
        my_put_nbr_base_scd_column(str[i], "0123456789abcdef");
        if (i % 2 != 0)
            my_putchar(' ');
    }
    if (size < 16) {
        for (int i = size; i != 16; i++) {
            my_putstr("  ");
            if (i % 2 != 0)
                my_putchar(' ');
        }
    }
}

void print_right_column(char *str, int size)
{
    for (int i = 0; i != size; i++) {
        if (my_alphaisprint(str[i]) == 0)
            my_putchar(str[i]);
        else
        my_putchar('.');
    }
}

int my_showmem(char *str, int size)
{
    (void)str;
    int spire = 0;
    int save_size = size;
    int send_size = 0;
    int n = 0;

    if (size % 16 != 0)
        spire = 1;
    for (int i = 0; i != size / 16 + spire; i++) {
        print_left_column(n);
        if (save_size > 16)
            send_size = 16;
        else
            send_size = save_size;
        print_middle_column(str, send_size);
        print_right_column(str, send_size);
        my_putchar('\n');
        save_size -= 16;
        if (save_size < 0)
            save_size *= -1;
        str = str + send_size;
        n += 16;
    }
    return (0);
}

// int main(void)
// {
//     char str[] = /*"\xff"*/ {112, 101, 116, 105, 116, 101, 32, 112, 104, 114, 97, 115, 101, 0, 0, 0, 1, 4, 2, 3};

//     my_showmem(str, 16);
//     return 0;
// }