#include "sort.h"

/**
 * bubble_sort - sorts array of integers in ascending order
 * @array: array to be sorted
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (a = 0; a < size - 1; a++)
	{
		swapped = 0;
		for (b = 0; b < size - a - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				temp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
		{
			return;
		}
	}
}
