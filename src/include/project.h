/*
** EPITECH PROJECT, 2024
** ls
** File description:
** ls' header
*/

#include <stdarg.h>
#include <unistd.h>
#include <sys/stat.h>
#ifndef PROJECT_H
    #define PROJECT_H

int dash_l(char const *path);

int dash_a(char const *path);

int is_file(const char *path);

#endif
