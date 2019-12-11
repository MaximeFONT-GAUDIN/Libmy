/*
** EPITECH PROJECT, 2019
** my_strsep.h
** File description:
** my_strsep.h
*/

#include "../../include/my.h"

int check_delim(char *delim, char c)
{
    for (int i = 0; delim[i] != 0; i++)
        if (c == delim[i])
            return (0);
    return (1);
}

char *my_strsep(char **stringp, char *delim)
{
    char *save = *stringp;
    int i = 0;

    if (delim[0] == 0) {
        if (*stringp == NULL) {
            return (save);
        }
        else {
            *stringp = NULL;
            return (save);
        }
    }
    if (/**stringp == 0 || */*stringp == NULL) {
        return (NULL);
    }
    for (; save[i] != 0 && check_delim(delim, save[i]) != 0; i++);
    if (save[i] == 0) {
        *stringp = NULL;
        return (save);
    }
    save[i] = 0;
    *stringp = *stringp + (i + 1);
    return (save);
}

// int main(void)
// {
//     char *str = strdup("une phrase simple");
//     char *ptr = str;

//     printf("%s\n", my_strsep(&str, " "));
//     printf("%s\n", my_strsep(&str, " "));
//     printf("%s\n", my_strsep(&str, " "));
//     printf("%s\n", my_strsep(&str, " "));
//     free(ptr);
// }