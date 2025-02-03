/*
** EPITECH PROJECT, 2024
** my_strncpy
** File description:
** bdfidjdsks
*/

#include <stddef.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}
