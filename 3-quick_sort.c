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
int partition(int arr[], int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
			if (arr[i] != arr[j])
				print_array(arr, size);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	if (arr[i + 1] != arr[high])
		print_array(arr, size);
	return (i + 1);
}

/**
 * sort-sort function
 * @arr:input array
 * @low:first element of array
 * @high:last element of array
 * @size:size of array
 */
void sort(int *arr, int low, int high, size_t size)
{
	int pIndex;

	if (low < high)
	{
		pIndex = partition(arr, low, high, size);
		sort(arr, low, pIndex - 1, size);
		sort(arr, pIndex + 1, high, size);
	}
}

/**
 * quick_sort-efficient sorting algorithm
 * @array:array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (size >= 2)
		sort(array, 0, size - 1, size);
}
