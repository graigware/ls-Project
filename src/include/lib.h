/*
** EPITECH PROJECT, 2024
** lib.h
** File description:
** my lib's header
*/

#ifndef LIB_H
    #define LIB_H

int my_strcmp(char const *s1, char const *s2);

void my_sort_int_array(int *array, int size);

int my_putfloat(float nb);

int my_print_params(int ac, char **av);

char *my_strdup(char const *src);

int my_isalnum(char c);

char *my_strncpy(char *dest, char const *src, int n);

char *my_revstr(char *str);

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
