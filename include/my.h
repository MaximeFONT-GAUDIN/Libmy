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
#include <errno.h>

void my_putchar(char c);
void my_putstr(char *str);
void my_put_nbr(int nbr);
int my_getnbr(char *str);
int my_alphaisprint(char c);
int my_alphaisnum(char c);
int my_alphaisalpha(char c);
int my_alphaisupper(char c);
int my_alphaislower(char c);
char my_alphatolower(char c);
char my_alphatoupper(char c);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_isneg(int n);
char *my_revstr(char *str);
int my_strlen(char *str);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);
int my_str_isalpha(char *str);
int my_str_isnum(char *str);
int my_str_islower(char *str);
int my_str_isupper(char *str);
int my_str_isprintable(char *str);
char *my_strcapitalize(char *str);
void my_swap(int *c1, int *c2);
char *my_strcat(char *str1, char *str2);
int my_strcmp(char *str1, char *str2);
char *my_strchr(char *str, char c);
char *my_strcpy(char *str1, char *str2);
int my_put_nbr_base(int nb, char *base);
int my_showstr(char *str);
char *my_strrchr(char *str, char c);
char *my_strncpy(char *str1, char *str2, int nb);
char **my_add_str_to_array(char **array, char *str);
int my_strlen_tab(char **array);
char *my_strdup(char *str);
char *my_strndup(char *str, int nb);
char *my_strncat(char *dest, char *src, int n);
int my_strncmp(char *str1, char *str2, int n);
char *my_strstr(char *str, char *oc);
void my_sort_int_array(int *array, int size);
char **my_strtowordarray(char *str, char *separator);
char *my_strsep(char **stringp, char *delim);
// int my_showmem(char *str, int size);

void *my_malloc(size_t size);

#endif