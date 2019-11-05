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

void my_putchar(char c);
int my_getnbr(char *str);
void my_putnbr(int nbr);
void my_putstr(char *str);
char *my_revstr(char *str);
char *my_strcat(char *str1, char *str2);
int my_strcmp(char *str1, char *str2);
char *my_strcpy(char *str1, char *str2);
char *my_strncpy(char *str1, char *str2, int nb);
int my_strlen(char *str);
char **my_strtowordarray(char *str1, char *separator);
void my_swap(char *c1, char *c2);
int my_alphaisprint(char c);
char *my_strncat(char *dest, char *src, int n);
int my_strncmp(char *str1, char *str2, int n);
int my_alphaisnum(char c);
int my_alphaisalpha(char c);
int my_alphaisupper(char c);
int my_alphaislower(char c);
char my_alphatolower(char c);
char my_alphatoupper(char c);

#endif