/*
** EPITECH PROJECT, 2024
** struct_dash
** File description:
** structure pour ls
*/

#ifndef STRUCTLS_H
    #define STRUCTLS_H

typedef struct {
    char flags;
    int (*dash)(char const *path);
} dash_t;

#endif
