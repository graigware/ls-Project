/*
** EPITECH PROJECT, 2024
** my_strcat
** File description:
** my_strcat
*/

#include "include/lib.h"

char *my_strcat(char *dest, char const *src)
{
    int lensrc = my_strlen(src);
    int lendest = my_strlen(dest);

    for (int i = 0; i < lensrc; i++) {
        dest[lendest + i] = src[i];
        dest[lendest + lensrc] = '\0';
    }
    return dest;
}
