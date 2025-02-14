/*
** EPITECH PROJECT, 2024
** dash l
** File description:
** a lot of infos
*/
#include "include/lib.h"
#include "include/structls.h"
#include "include/printf.h"
#include "include/project.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

static void perms(mode_t mode)
{
    my_printf("%c", S_ISDIR(mode) ? 'd' : '-');
    my_printf("%c", mode & S_IRUSR ? 'r' : '-');
    my_printf("%c", mode & S_IWUSR ? 'w' : '-');
    my_printf("%c", mode & S_IXUSR ? 'x' : '-');
    my_printf("%c", mode & S_IRGRP ? 'r' : '-');
    my_printf("%c", mode & S_IWGRP ? 'w' : '-');
    my_printf("%c", mode & S_IXGRP ? 'x' : '-');
    my_printf("%c", mode & S_IROTH ? 'r' : '-');
    my_printf("%c", mode & S_IWOTH ? 'w' : '-');
    my_printf("%s", mode & S_IXOTH ? "x " : "- ");
}

static void display_uid_gid(uid_t uid, gid_t gid)
{
    struct passwd *pwd;
    struct group *grp;

    pwd = getpwuid(uid);
    grp = getgrgid(gid);
    my_printf("%s ", pwd ? pwd->pw_name : "");
    my_printf("%s ", grp ? grp->gr_name : "");
}

static void display_file_info(const struct stat *stats, const char *filename)
{
    char *date_str;

    perms(stats->st_mode);
    my_printf("%d ", stats->st_nlink);
    display_uid_gid(stats->st_uid, stats->st_gid);
    my_printf("%d ", (int)stats->st_size);
    date_str = ctime(&stats->st_mtime);
    if (date_str != NULL) {
        date_str[16] = '\0';
        my_printf("%s ", date_str + 4);
    }
    my_printf("%s\n", filename);
}

static int process_entry(const char *path, const struct dirent *entry)
{
    struct stat stats;
    char filepath[256];

    if (entry->d_name[0] == '.')
        return 0;
    my_strncpy(filepath, path, sizeof(filepath));
    my_strcat(filepath, "/");
    my_strcat(filepath, entry->d_name);
    if (stat(filepath, &stats) == -1)
        return 0;
    return stats.st_blocks / 2;
}

static int link_number(const char *path)
{
    DIR *directory = opendir(path);
    struct dirent *entry;
    int links = 0;

    if (!directory)
        return 84;
    entry = readdir(directory);
    if (!entry) {
        closedir(directory);
        return 84;
    }
    while (entry != NULL) {
        links += process_entry(path, entry);
        entry = (readdir(directory));
    }
    closedir(directory);
    return links;
}

static int process_directory_entry(const char *path, struct dirent *entry)
{
    struct stat stats;
    char filepath[256];

    my_strncpy(filepath, path, sizeof(filepath));
    my_strcat(filepath, "/");
    my_strcat(filepath, entry->d_name);
    if (stat(filepath, &stats) == -1)
        return 84;
    display_file_info(&stats, entry->d_name);
    return 0;
}

static int process_directory(DIR *directory, const char *path)
{
    struct dirent *entry;

    if (!directory)
        return 84;
    entry = readdir(directory);
    if (!entry) {
        closedir(directory);
        return 84;
    }
    while (entry != NULL) {
        if (entry->d_name[0] != '.') {
            process_directory_entry(path, entry);
        }
        entry = readdir(directory);
    }
    return 0;
}

int dash_l(const char *path)
{
    DIR *directory;
    int links;

    directory = opendir(path);
    if (!directory)
        return 84;
    links = link_number(path);
    my_printf("total %d\n", links);
    process_directory(directory, path);
    return 0;
}
