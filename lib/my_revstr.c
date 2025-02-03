/*
** EPITECH PROJECT, 2024
** my_revstr
** File description:
** reverse une str
*/
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "include/lib.h"

char *my_revstr(char *str)
{
    int i = 0;
    int len_str = my_strlen(str);
    int len_dest = len_str - 1;
    int reverse = 0;

    while (i < len_dest) {
        reverse = str[i];
        str[i] = str[len_dest];
        str[len_dest] = reverse;
        i++;
        len_dest--;
    }
    return str;
}
