#include "sort.h"

/**
 * shell_sort-shell sort
 * @array:input
 * @size:size
 */
void shell_sort(int *array, size_t size)
{
	int temp;
	unsigned int i, gap, j;

	if (size >= 2)
	{
		for (gap = (3 * size - 1) / 2; gap > 0; gap /= 3)
		{
			for (i = gap; i < size; i++)
			{
				temp = array[i];

				for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
				{
					array[j] = array[j - gap];
				}
				array[j] = temp;
			}
			if (gap <= (size - 1))
				print_array(array, size);
		}
	}
}
