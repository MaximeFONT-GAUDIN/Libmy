/*
** EPITECH PROJECT, 2019
** my_strstr.c
** File description:
** my_strstr.c
*/

#include "my.h"

char *my_strstr(char *str, char *oc)
{
    int i = 0;
    int save_position = -1;

    if (my_strlen(oc) == 0)
        return (str);
    for (; str[i] != 0; i++) {
        if (str[i] == oc[0]){
            save_position = my_strncmp(str + i, oc, my_strlen(oc));
        }
        if (save_position == 0)
            return (str + i);
        if (my_strlen(str) - i < my_strlen(oc))
            return (NULL);
        save_position = -1;
    }
    return (NULL);
}