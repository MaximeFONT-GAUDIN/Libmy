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
    int i = 0;
    char *save = *stringp;

    if (delim[0] == 0) {
        *stringp = *stringp + (strlen(*stringp) + 1);
        *stringp = NULL;
        return (NULL);
    }
    if (*stringp == NULL)
        return (*stringp);
    for (; save[i] != 0 && check_delim(delim, save[i]) != 0; i++);
    save[i] = 0;
    *stringp = *stringp + (i + 1);
    return (save);
}