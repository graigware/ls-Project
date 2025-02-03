/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** dup une string
*/
#include "include/lib.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;
    int len_src = my_strlen(src);

    str = malloc(sizeof(char) * (len_src + 1));
    for (; i < len_src; i++) {
        str[i] = src[i];
    }
    str[i] = '\0';
    return str;
}
