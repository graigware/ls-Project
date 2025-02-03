/*
** EPITECH PROJECT, 2024
** my_sor_int_array
** File description:
** trier des int
*/
#include "unistd.h"
#include "stdio.h"
#include "include/lib.h"

int swap_int(int *array, int i, int j)
{
    if (array[j] > array[i]) {
        my_swap(&array[i], &array[j]);
    }
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            swap_int(array, i, j);
        }
    }
}
