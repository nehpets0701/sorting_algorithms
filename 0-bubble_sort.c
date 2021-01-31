#include "sort.h"

/**
 * swap-swaps positions in array
 * @a:position a
 * @b:position b
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort-first sorting algorithm
 * Return:void
 * @array:input to be sorted
 * @size:size of array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
				}
			}
		}
	}
}
