/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** swapp two int
*/

void my_swap(int *a, int *b)
{
    int result = 0;

    result = *b;
    *b = *a;
    *a = result;
}
