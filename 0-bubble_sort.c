#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: size of the array
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
		for (j = 0; j < size - a - 1; j++)
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
