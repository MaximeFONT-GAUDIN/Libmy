/*
** EPITECH PROJECT, 2019
** my_strsep_test.c
** File description:
** my_strsep_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>

#define cr_assert_strsep(_expected, _stringp, _delim, _end)     \
do {                                                            \
    const char *expected = _expected;                           \
    char **stringp = _stringp;                                  \
    char *delim = _delim;                                       \
    char *ptr = *stringp;                                       \
    int end  = _end;                                            \
    char *string = my_strsep(stringp, delim);                   \
                                                                \
    if (expected == NULL)                                       \
    {                                                           \
        cr_assert_null(string);                                 \
        cr_assert_eq(ptr, *stringp);                            \
    }                                                           \
    else if (end == 0)                                          \
    {                                                           \
        cr_assert_str_eq(expected, string);                     \
        cr_assert_eq(ptr, string);                              \
        cr_assert_eq(ptr + strlen(string) + 1, *stringp);       \
    }                                                           \
    else if (end == 1)                                          \
    {                                                           \
        cr_assert_str_eq(expected, string);                     \
    }                                                           \
} while (0)

Test(my_strsep, str_with_simple_delim)
{
    char *str = strdup("une phrase simple");
    char *ptr = str;

    cr_assert_strsep("une", &str, " ", 0);
    cr_assert_strsep("phrase", &str, " ", 0);
    cr_assert_strsep("simple", &str, " ", 1);
    cr_assert_null(str);
    cr_assert_strsep(NULL, &str, " ", 5);
    free(ptr);
}

Test(my_strsep, empty_str_single_delim)
{
    char *str = strdup("");
    char *ptr = str;

    cr_assert_strsep("", &str, " ", 1);
    cr_assert_null(str);
    free(ptr);
}

Test(my_strsep, str_null)
{
    char *str = NULL;

    cr_assert_strsep(NULL, &str, " ", 5);
}

Test(my_strsep, empty_delim)
{
    char *str = strdup("une phrase pour tester les delim vide");
    char *ptr = str;

    cr_assert_strsep(ptr, &str, "", 1);
    cr_assert_null(str);
    free(ptr);
}

Test(my_strsep, str_with_multi_delim_1)
{
    char *str = strdup("on va utiliser une phrase un peu plus longue pour ce test");
    char *ptr = str;

    cr_assert_strsep("on", &str, " eh", 0);
    cr_assert_strsep("va", &str, " eh", 0);
    cr_assert_strsep("utilis", &str, " eh", 0);
    cr_assert_strsep("r", &str, " eh", 0);
    cr_assert_strsep("un", &str, " eh", 0);
    cr_assert_strsep("", &str, " eh", 0);
    cr_assert_strsep("p", &str, " eh", 0);
    cr_assert_strsep("ras", &str, " eh", 0);
    cr_assert_strsep("", &str, " eh", 0);
    cr_assert_strsep("un", &str, " eh", 0);
    cr_assert_strsep("p", &str, " eh", 0);
    cr_assert_strsep("u", &str, " eh", 0);
    cr_assert_strsep("plus", &str, " eh", 0);
    cr_assert_strsep("longu", &str, " eh", 0);
    cr_assert_strsep("", &str, " eh", 0);
    cr_assert_strsep("pour", &str, " eh", 0);
    cr_assert_strsep("c", &str, " eh", 0);
    cr_assert_strsep("", &str, " eh", 0);
    cr_assert_strsep("t", &str, " eh", 0);
    cr_assert_strsep("st", &str, " eh", 1);
    cr_assert_null(str);
    free(ptr);
}

Test(my_strsep, str_with_multi_delim_2)
{
    char *str = strdup("cette fois ci une phrase qui permet beaucoup d'appel et beacoup de delimiteur");
    char *ptr = str;

    cr_assert_strsep("c", &str, " ef", 0);
    cr_assert_strsep("tt", &str, " ef", 0);
    cr_assert_strsep("", &str, " ef", 0);
    cr_assert_strsep("", &str, " ef", 0);
    cr_assert_strsep("ois", &str, " ef", 0);
    cr_assert_strsep("ci", &str, " ef", 0);
    cr_assert_strsep("un", &str, " ef", 0);
    cr_assert_strsep("", &str, " ef", 0);
    cr_assert_strsep("phras", &str, " ef", 0);
    cr_assert_strsep("", &str, " ef", 0);
    cr_assert_strsep("qui", &str, " ef", 0);
    cr_assert_strsep("p", &str, " ef", 0);
    cr_assert_strsep("rm", &str, " ef", 0);
    cr_assert_strsep("t", &str, " ef", 0);
    cr_assert_strsep("b", &str, " ef", 0);
    cr_assert_strsep("aucoup", &str, " ef", 0);
    cr_assert_strsep("d'app", &str, " ef", 0);
    cr_assert_strsep("l", &str, " ef", 0);
    cr_assert_strsep("", &str, " ef", 0);
    cr_assert_strsep("t", &str, " ef", 0);
    cr_assert_strsep("b", &str, " ef", 0);
    cr_assert_strsep("acoup", &str, " ef", 0);
    cr_assert_strsep("d", &str, " ef", 0);
    cr_assert_strsep("", &str, " ef", 0);
    cr_assert_strsep("d", &str, " ef", 0);
    cr_assert_strsep("limit", &str, " ef", 0);
    cr_assert_strsep("ur", &str, " ef", 1);
    cr_assert_null(str);
    free(ptr);
}