/*
** EPITECH PROJECT, 2024
** my_strcpy
** File description:
** copy un str
*/
#include <stddef.h>

char *my_strcpy(char *dest, char const *src)
{
    int c;

    for (c = 0; src[c] != '\0'; c++) {
        dest[c] = src[c];
    }
    dest[c] = ('\0');
        return (dest);
}
