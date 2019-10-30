/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include <unistd.h>

int main(void)
{
    char *str = "Hello World";
    int len = 11;

    write(1, str, len);
    return 0;
}