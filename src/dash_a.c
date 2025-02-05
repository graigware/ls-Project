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

int dash_a(char const *path)
{
    DIR *directory;
    struct dirent *entry;

    if (is_file(path) == 1)
        my_printf("%s\n", path);
    directory = opendir(path);
    if (!directory)
        return 84;
    entry = readdir(directory);
    if (!entry) {
        closedir(directory);
        return 84;
    }
    while (entry != NULL) {
        my_printf("%s\n", entry->d_name);
        entry = readdir(directory);
    }
    closedir(directory);
    return 0;
}
