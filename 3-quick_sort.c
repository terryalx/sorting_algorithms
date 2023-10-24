#include "sort.h"

/**
 * swap_int - swaps elements in array
 * @a: element 1
 * @b: element 2
 *
 * Return: NULL
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

/**
 * lomuto_partition - array of integers
 * @array: int arry
 * @size: array size
 * @low: index 1
 * @high: index -1
 *
 * Return: new arry index
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] != pivot)
	{
		swap_int(&array[i], &array[high]);
		print_array(array, size);
	}

	return (i);
}

/**
 * lomuto_sort - quick sort algorithm
 * @array: array
 * @size: array size
 * @low: array index 1
 * @high: array index - 1
 *
 * Return: 0
 */
void lomuto_sort(int *array, size_t size, int low, int high)
{
	int hld;

	if (low < high)
	{
		hld = lomuto_partition(array, size, low, high);
		lomuto_sort(array, size, low, hld - 1);
		lomuto_sort(array, size, hld + 1, high);
	}
}

/**
 * quick_sort - sort an array of integers in ascending order
 * @array: the array
 * @size: the size of the array
 * Return: 0
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	lomuto_sort(array, size, 0, size - 1);
}
