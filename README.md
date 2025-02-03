# Recode of ls function in C

## Description

This project involves recreating the standard `ls` function in C. The aim of the project is to gain a deep understanding of how this function works. To achieve that, you need to manipulate various data types and use specific structures. You can also utilize pointers to functions and function arrays for diverse and efficient management of format specifiers. `my_ls` supports the most common format specifiers, such as `-a`, `-l`, and many others.

## Features

The `my_ls` developed in this project supports the following specifiers:
- `-a` : Shows hidden files
- `-l` : Displays detailed information about files and folders, such as name or UID

## Installation

To compile the project, ensure you follow the correct folder structure:

```
/*.c && .h                      # All necessary .c and .h files
/Makefile                       # Automates compilation
/include/lib.h && project.h && printf.h && structls.h   # lib.h contains all functions of the library, project.h contains project-specific functions, printf.h contains printf-related functions, and structls.h manages an array of function pointers for ls.
```

Compile using the following commands:

```bash
make         # Compiles all .c files into an executable
make re      # Recompiles all files after modifications
```

## Usage

```bash
./my_ls          # Runs the program
./my_ls -a       # Lists all files, including hidden ones
./my_ls -l       # Lists all files, with their informations like their UNIX rights or GID
```

## Contributors

Me and my "knowledge" for an Epitech project !
