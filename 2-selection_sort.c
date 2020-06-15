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

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}

		aux = array[min_idx];
		array[min_idx] = array[i];
		array[i] = aux;

		print_array(array, size);
	}
}
