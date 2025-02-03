/*
** EPITECH PROJECT, 2024
** my_print_params
** File description:
** print args
*/
#include "unistd.h"
#include "include/lib.h"

int my_print_params(int ac, char **av)
{
    for (int i = 0; i < ac; i++) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
    return 0;
}
