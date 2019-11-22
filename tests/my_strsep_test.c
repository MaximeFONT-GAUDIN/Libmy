/*
** EPITECH PROJECT, 2019
** my_strsep_test.c
** File description:
** my_strsep_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

#define cr_assert_strsep(_expected, _stringp, _delim)     \
do {                                                      \
    const char *expected = _expected;                     \
    char **stringp = _stringp;                            \
    char *delim = _delim;                                 \
                                                          \
    char *ptr = *stringp;                                 \
    char *string = my_strsep(stringp, delim);             \
                                                          \
    if (expected == NULL)                                 \
    {                                                     \
        cr_assert_null(string);                           \
        cr_assert_eq(ptr, *stringp);                      \
    }                                                     \
    else                                                  \
    {                                                     \
        cr_assert_str_eq(expected, string);               \
        cr_assert_eq(ptr, string);                        \
        cr_assert_eq(ptr + strlen(string) + 1, *stringp); \
    }                                                     \
} while (0)

Test(my_strsep, str_with_simple_delim)
{
    char *str = strdup("une phrase simple");
    char *ptr = str;

    cr_assert_strsep("une", &str, " ");
    cr_assert_strsep("phrase", &str, " ");
    cr_assert_strsep("simple", &str, " ");
    cr_assert_strsep(NULL, &str, " ");
    cr_assert_strsep(NULL, &str, " ");

    free(ptr);
}

Test(my_strsep, empty_str_single_delim)
{
    char *str = strdup("");
    char *ptr = str;

    cr_assert_strsep(NULL, &str, " ");

    free(ptr);
}

Test(my_strsep, str_null)
{
    char *str = NULL;

    cr_assert_strsep(NULL, &str, " ");
}

Test(my_strsep, empty_delim)
{
    char *str = strdup("une phrase pour tester les delim vide");
    char *ptr = str;

    cr_assert_strsep("une phrase pour tester les delim vide", &str, "");
    cr_assert_strsep(NULL, &str, "");

    free(ptr);
}

Test(my_strsep, str_with_multi_delim_1)
{
    char *str = strdup("on va utiliser une phrase un peu plus longue pour ce test");
    char *ptr = str;

    cr_assert_strsep("on", &str, " eh");
    cr_assert_strsep("va", &str, " eh");
    cr_assert_strsep("utilis", &str, " eh");
    cr_assert_strsep("r", &str, " eh");
    cr_assert_strsep("un", &str, " eh");
    cr_assert_strsep("", &str, " eh");
    cr_assert_strsep("phras", &str, " eh");
    cr_assert_strsep("", &str, " eh");
    cr_assert_strsep("un", &str, " eh");
    cr_assert_strsep("p", &str, " eh");
    cr_assert_strsep("u", &str, " eh");
    cr_assert_strsep("plus", &str, " eh");
    cr_assert_strsep("longu", &str, " eh");
    cr_assert_strsep("", &str, " eh");
    cr_assert_strsep("pour", &str, " eh");
    cr_assert_strsep("c", &str, " eh");
    cr_assert_strsep("", &str, " eh");
    cr_assert_strsep("t", &str, " eh");
    cr_assert_strsep("st", &str, " eh");
    cr_assert_strsep(NULL, &str, "");

    free(ptr);
}

Test(my_strsep, str_with_multi_delim_2)
{
    char *str = strdup("cette fois ci une phrase qui permet beaucoup d'appel et beacoup de delimiteur");
    char *ptr = str;

    cr_assert_strsep("c", &str, " ef");
    cr_assert_strsep("tt", &str, " ef");
    cr_assert_strsep("", &str, " ef");
    cr_assert_strsep("", &str, " ef");
    cr_assert_strsep("ois", &str, " ef");
    cr_assert_strsep("ci", &str, " ef");
    cr_assert_strsep("un", &str, " ef");
    cr_assert_strsep("", &str, " ef");
    cr_assert_strsep("phras", &str, " ef");
    cr_assert_strsep("", &str, " ef");
    cr_assert_strsep("qui", &str, " ef");
    cr_assert_strsep("p", &str, " ef");
    cr_assert_strsep("rm", &str, " ef");
    cr_assert_strsep("t", &str, " ef");
    cr_assert_strsep("b", &str, " ef");
    cr_assert_strsep("aucoup", &str, " ef");
    cr_assert_strsep("d'app", &str, " ef");
    cr_assert_strsep("l", &str, " ef");
    cr_assert_strsep("", &str, " ef");
    cr_assert_strsep("t", &str, " ef");
    cr_assert_strsep("b", &str, " ef");
    cr_assert_strsep("acoup", &str, " ef");
    cr_assert_strsep("d", &str, " ef");
    cr_assert_strsep("", &str, " ef");
    cr_assert_strsep("d", &str, " ef");
    cr_assert_strsep("limit", &str, " ef");
    cr_assert_strsep("ur", &str, " ef");
    cr_assert_strsep(NULL, &str, " ef");

    free(ptr);
}