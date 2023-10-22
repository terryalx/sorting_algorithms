#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int temp, swapped;
	int val1 = 1;
	int val2 = 2;

	if (array == NULL || size < val2)
	{
		return;
	}

	for (a = 0; a < size - val1; a++)
	{
		swapped = 0;
		for (b = 0; b < size - a - val1; b++)
		{
			if (array[b] > array[b + val1])
			{
				temp = array[b];
				array[b] = array[b + val1];
				array[b + val1] = temp;
				swapped = val1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
		{
			return;
		}
	}
}
