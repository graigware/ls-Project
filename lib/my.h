/*
** EPITECH PROJECT, 2024
** include
** File description:
** include
*/

#include <stdarg.h>
#include <unistd.h>
#include <sys/stat.h>
#include <SFML/Graphics.h>
#include <SFML/System/Vector2.h>
#include <event.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Window.h>
#ifndef MY_H
    #define MY_H

int my_isalnum(char c);

char *my_strncpy(char *dest, char const *src, int n);

void tiret_l(char const *path);

void tiret_a(char const *path);

char *my_revstr(char *str);

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

int my_printf(char const *format, ...);

int my_strlen(char const *str);

int my_putstr(char const *str);

void my_putchar(char c);

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb);

int my_isneg(int nb);

int my_put_nbr(int nb);

void my_swap(int *a, int *b);

char *my_strcpy(char *dest, char const *src);

char *my_strncpy(char *dest, char const *src, int n);

char *my_revstr(char *str);

#endif
