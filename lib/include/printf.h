/*
** EPITECH PROJECT, 2024
** printf.h
** File description:
** my printf's header
*/

#include <stdarg.h>
#ifndef PRINTF_H
    #define PRINTF_H

int my_printf(char const *format, ...);

int my_put_unsigned_nbr(unsigned int nb);

int handle_unsigned(va_list ap);

int handle_e(va_list ap);

int flottant(va_list ap);

int handle_ptr(va_list ap);

int handle_oct(va_list ap);

int handle_hexmaj(va_list ap);

int handle_hex(va_list ap);

int handle_char(va_list ap);

int handle_str(va_list ap);

int handle_int(va_list ap);

int percent(va_list ap);

#endif
