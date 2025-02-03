/*
** EPITECH PROJECT, 2024
** dash a
** File description:
** hidden files
*/
#include "include/lib.h"
#include "include/project.h"
#include "include/structls.h"
#include "include/printf.h"
#include "include/structid.h"
#include <dirent.h>
#include <stdio.h>

void dash_a(char const *path)
{
    DIR *directory;
    struct dirent *entry;

    (void)path;
    directory = opendir(".");
    if (directory == NULL) {
        return;
    }
    entry = readdir(directory);
    while (entry != NULL) {
        if (entry->d_name[0] == '.' || entry->d_name[0] != '.') {
            my_printf("%s ", entry->d_name);
        }
        entry = readdir(directory);
    }
    if (closedir(directory) == -1) {
        return;
    }
    my_putchar('\n');
    return;
}
