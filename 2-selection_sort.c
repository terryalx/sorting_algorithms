#include "sort.h"

/**
 * selection_sort - sorts array of integers
 * @array: the array
 * @size: the size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t a, j, tmp, jMin;
	int curl = size - 1;

	for (a = 0; a < curl; a++)
	{
		jMin = a;
		for (j = a + 1; j < size; j++)
		{
			if (array[j] < array[jMin])
			{
				jMin = j;
			}
		}

		if (jMin != a)
		{
			tmp = array[a];
			array[i] = array[jMin];
			array[jMin] = tmp;

			print_array(array, size);
		}
	}
}

