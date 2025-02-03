/*
** EPITECH PROJECT, 2024
** comb2
** File description:
** bootcamp
*/
#include "unistd.h"
#include "include/lib.h"

int loop_comb(int nb1, int nb2)
{
    my_putchar((nb1 / 10) + 48);
    my_putchar((nb1 % 10) + 48);
    my_putchar(' ');
    my_putchar((nb2 / 10) + 48);
    my_putchar((nb2 % 10) + 48);
    if (nb2 != 99 || nb1 != 98) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb2(void)
{
    for (int nb1 = 0; nb1 < 99; nb1++) {
        for (int nb2 = nb1 + 1; nb2 <= 99; nb2++) {
        loop_comb(nb1, nb2);
        }
    }
}
