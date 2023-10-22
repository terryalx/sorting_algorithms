#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in 
 * ascending order using the bubble sort algorithm.
 * @arr: The array to be sorted.
 * @n: The number of elements in the array.
 */

void bubble_sort(int *arr, size_t n)
{
	size_t i, j;
	int temp;
	int didSwap;

	if (arr == NULL || n < 2)
	{
		return;
	}

	for (i = 0; i < n - 1; i++)
	{
		didSwap = 0;

		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				didSwap = 1;
				custom_print_array(arr, n);
			}
		}

		if (didSwap == 0)
		{
			return;
		}
	}
}

