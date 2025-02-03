/*
** EPITECH PROJECT, 2024
** toujours le flag "u"
** File description:
** pour les entiers non-signés
*/
#include "include/lib.h"

int my_put_unsigned_nbr(unsigned int nb)
{
    if (nb >= 10) {
        my_put_unsigned_nbr(nb / 10);
    }
    my_putchar((nb % 10) + '0');
    return 0;
}
