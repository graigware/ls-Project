/*
** EPITECH PROJECT, 2024
** negative or positive ?
** File description:
** N or P
*/

#include "include/lib.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return 0;
}
