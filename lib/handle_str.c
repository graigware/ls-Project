/*
** EPITECH PROJECT, 2024
** handle_str
** File description:
** pour print un str dans printf
*/
#include <stdarg.h>
#include <stddef.h>
#include "include/lib.h"

int handle_str(va_list ap)
{
    char *str = va_arg(ap, char *);

    if (str == NULL) {
        return 0;
    }
    return my_putstr(str);
}
