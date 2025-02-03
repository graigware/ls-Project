/*
** EPITECH PROJECT, 2024
** my_ls
** File description:
** recode ls function
*/
#include <stdio.h>
#include <dirent.h>
#include "include/lib.h"
#include "include/printf.h"
#include "include/structid.h"
#include "include/structls.h"
#include "include/project.h"

const dash_t space[] = {
    {'a', dash_a},
    {'l', dash_l},
    { '\0', NULL }
};

const char *path = ".";

int parcour_arguments(char arguments, const char *path)
{
    for (int i = 0; space[i].arguments != '\0'; i++) {
        if (space[i].arguments == arguments) {
            space[i].dash(path);
            return 0;
        }
    }
    return 1;
}

int open_files(int ac, char **av)
{
    DIR *directory;
    struct dirent *entry;

    (void)ac;
    (void)av;
    directory = opendir(".");
    if (directory == NULL)
        return 84;
    entry = readdir(directory);
    while (entry != NULL) {
        if (entry->d_name[0] != '.') {
            my_printf("%s  ", entry->d_name);
        }
        entry = readdir(directory);
    }
    if (closedir(directory) == -1)
        return 84;
    my_printf("\n");
    return 0;
}

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 1)
        open_files(ac, av);
    while (i < ac) {
        if (av[i][0] == '-') {
            parcour_arguments(av[i][1], path);
        }
        i++;
    }
}
