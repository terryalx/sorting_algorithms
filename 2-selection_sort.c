#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: the array
 * @size: thae size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t a;
	size_t b;
	size_t tmp, jMin;

	for (a = 0; a < size - 1; a++)
	{
		jMin = a;
		for (b = a + 1; b < size; b++)
			if (array[b] < array[jMin])
			{
				jMin = b;
			}

		if (jMin != a)
		{
			tmp = array[a];
			array[a] = array[jMin];
			array[jMin] = tmp;

			print_array(array, size);
		}
	}
}
