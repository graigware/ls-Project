/*
** EPITECH PROJECT, 2024
** my_strncat
** File description:
** nul frr
*/

#include "include/lib.h"

char *my_strncat(char *dest, char const *src, int n)
{
    int lensrc = my_strlen(src);
    int lendest = my_strlen(dest);
    int i = 0;

    for (; i < lensrc; i++) {
        dest[lendest + n] = src[i];
        dest[lendest + lensrc] = '\0';
    }
    return dest;
}
