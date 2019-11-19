/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void my_putchar(char c);
int my_getnbr(char *str);
void my_put_nbr(int nbr);
void my_putstr(char *str);
char *my_revstr(char *str);
char *my_strcat(char *str1, char *str2);
int my_strcmp(char *str1, char *str2);
char *my_strcpy(char *str1, char *str2);
char *my_strncpy(char *str1, char *str2, int nb);
int my_strlen(char *str);
char **my_strtowordarray(char *str1, char *separator);
void my_swap(int *c1, int *c2);
int my_alphaisprint(char c);
char *my_strncat(char *dest, char *src, int n);
int my_strncmp(char *str1, char *str2, int n);
int my_alphaisnum(char c);
int my_alphaisalpha(char c);
int my_alphaisupper(char c);
int my_alphaislower(char c);
char my_alphatolower(char c);
char my_alphatoupper(char c);
char *my_strchr(char *str, char c);
char *my_strrchr(char *str, char c);
char *my_strstr(char *str, char *oc);
char *my_strcapitalize(char *str);
int my_showstr(char *str);
int my_put_nbr_base(int nb, char *base);
int my_showmem(char *str, int size);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
int my_str_isalpha(char *str);
int my_str_isnum(char *str);
int my_str_islower(char *str);
int my_str_isupper(char *str);
int my_str_isprintable(char *str);
int my_isneg(int n);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
void my_sort_int_array(int *array, int size);
char *my_strdup(char *str);
char *my_strndup(char *str, int nb);

#endif