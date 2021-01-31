#include "sort.h"

void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	unsigned int val, num;

	for (i = 0; i < size; i++)
	{
		num = i;
		val = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < array[num])
			{
				num = j;
				val = array[num];
			}
		}
		if (i != num)
		{
			array[num] = array[i];
			array[i] = val;
			print_array(array, size);
		}
	}
}
