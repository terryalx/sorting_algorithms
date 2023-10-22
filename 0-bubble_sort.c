#include "sort.h"

/**
 * bubble_sort - sorts an array i
 * of integers in ascending order
 * @array: array to sort
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t a, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (a = 0; a < size - 1; a++)
	{
		swapped = 0;
		for (j = 0; j < size - j - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
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
