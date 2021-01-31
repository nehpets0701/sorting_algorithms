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
 * partition-partitions the array for quicksort
 * Return:partitioning index
 * @arr:array to partition
 * @low:lowest element
 * @high:highest element
 */
int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

/**
 * findLow- finds lowest number in an array
 * @arr: array input
 * Return: lowest value
 */
int findLow(int *arr, int size)
{
	int i = 0;
	int lowest = arr[0];

	for (i = 0; i <= size; i++)
	{
		if (arr[i] < lowest)
			lowest = arr[i];
		else
			continue;
		
	}
	return (lowest);
}

/**
 * findHigh- finds highest number in an array
 * @arr: array input
 * Return: highest value
 */
int findHigh(int *arr, int size)
{
	int i = 0;
	int highest = arr[0];

	for (i = 0; i <= size; i++)
	{
		if (arr[i] > highest)
			highest = arr[i];
		else
			continue;
		
	}
	return (highest);
}

/**
 * quick_sort-efficient sorting algorithm
 * @array:array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int low = findLow(array, size);
	int high = findHigh(array, size);
	int stack[1024];
	int top = -1;
	int pIndex = 0;

	stack[++top] = low;
	stack[++top] = high;

	while (top >= 0)
	{
		high = stack[top--];
		low = stack[top--];

		pIndex = partition(array, low, high);

		if (pIndex - 1 > low)
		{
			stack[++top] = low;
			stack[++top] = pIndex - 1;
		}

		if (pIndex + 1 < high)
		{
			stack[++top] = pIndex + 1;
			stack[++top] = high;
		}
	}
}
