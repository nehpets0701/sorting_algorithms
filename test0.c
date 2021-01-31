#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 1, 2, 3, 4, 5, 6, 7, 5, 7, 3, 7, 4, 8, 3465, 467, 23, 66436, 7654, 73, 3575756, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 6, 6, 6, 6, 6, 3, 4, 3, 4, 34, 643, 63, 64, 6346, 14, 34, 6, 35435, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 8765, 346, 65848, 86386, 86538, 5753, 759, 4564, 13, 52, 96, 73, 86, 7, 69, 420, 234, 545, 6523, 5, 7, 8658858, 84, 648, 64, 2, 235, 235};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
