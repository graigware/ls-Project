/*
** EPITECH PROJECT, 2024
** my_ls
** File description:
** recode ls function
*/
#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "include/lib.h"
#include "include/printf.h"
#include "include/structid.h"
#include "include/structls.h"
#include "include/project.h"

const dash_t tab[] = {
    {'a', dash_a},
    {'l', dash_l},
    { '\0', NULL }
};

int parcour_flags(char flags, const char *path)
{
    for (int i = 0; tab[i].flags != '\0'; i++) {
        if (tab[i].flags == flags) {
            tab[i].dash(path);
            return 0;
        }
    }
    return 1;
}

int is_file(const char *path)
{
    struct stat stats;

    if (stat(path, &stats) != 0) {
        my_printf("my_ls: cannot access 'lala': No such file or directory\n");
        return 84;
    } else
        return S_ISREG(stats.st_mode);
}

int open_files(const char *path)
{
    DIR *directory = opendir(path);
    struct dirent *entry;

    if (is_file(path) == 1)
        my_printf("%s\n", path);
    if (!directory)
        return 84;
    entry = readdir(directory);
    if (!entry) {
        closedir(directory);
        return 84;
    }
    while (entry != NULL) {
        if (entry->d_name[0] != '.')
            my_printf("%s\n", entry->d_name);
        entry = readdir(directory);
    }
    closedir(directory);
    return 0;
}

static void display_content(char **av, int i)
{
    if (av[i + 1])
        parcour_flags(av[i][1], av[i + 1]);
    else
        parcour_flags(av[i][1], ".");
}

int main(int ac, char **av)
{
    int has_flag = 0;

    if (ac == 1)
        open_files(".");
    for (int i = 1; i < ac; i++) {
        if (av[i][0] == '-') {
            has_flag = 1;
            display_content(av, i);
        }
    }
    if (!has_flag)
        for (int i = 1; i < ac; i++)
            open_files(av[i]);
    return 0;
}
