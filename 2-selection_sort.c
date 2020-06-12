#include "sort.h"
/**
 * selection_sort - sort an array with selection sort algorithm
 * @array: array to sort.
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	int min_idx, aux;

	/* go through the array */
	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{

			/* Search for the less element on the array */
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}

		/* Swap element */
		aux = array[min_idx];
		array[min_idx] = array[i];
		array[i] = aux;

		/* Print the status of the array on every iteration */
		print_array(array, size);
	}
}
