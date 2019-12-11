/*
** EPITECH PROJECT, 2019
** my_add_str_to_array_test.c
** File description:
** my_add_str_to_array_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

Test(my_add_str_to_array, one_more_str)
{
    char **ret = NULL;

    char **tab = malloc(sizeof(char *) * (5));
    tab[0] = my_strdup("bonjour");
    tab[1] = my_strdup("cest");
    tab[2] = my_strdup("une");
    tab[3] = my_strdup("phrase");
    tab[4] = NULL;

    char **res = malloc(sizeof(char *) * (5 + 1));
    res[0] = my_strdup("bonjour");
    res[1] = my_strdup("cest");
    res[2] = my_strdup("une");
    res[3] = my_strdup("phrase");
    res[4] = my_strdup("simple");
    res[5] = NULL;

    ret = my_add_str_to_array(tab, "simple");
    for (int i = 0; ret[i] != NULL; i++) {
        cr_assert_str_eq(ret[i], res[i]);
    }
    for (int i = 0; tab[i] != NULL; i++) {
        free(tab[i]);
    }
    for (int i = 0; res[i] != NULL; i++) {
        free(ret[i]);
        free(res[i]);
    }
    free(tab);
    free(res);
    free(ret);
}