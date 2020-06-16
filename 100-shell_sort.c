#include "sort.h"

/**
 * shell_sort - sorts an array of integers with shell sort algorithm.
 * @size: size of the array.
 * @array: array to sort.
 */
void shell_sort(int *array, size_t size)
{
	unsigned int h = 1, i, aux;
	int tmp, finish = 1;

	if (array == NULL || size < 2)
		return;

	while (h < size)
		h = 3 * h + 1;

	for (h = (h - 1) / 3; h > 0; h = (aux - 1) / 3)
	{
		aux = h;
i:
		for (i = 0; i < size; i++, h++)
		{
			if (h < size && array[i] > array[h])
			{
				tmp = array[i];
				array[i] = array[h];
				array[h] = tmp;
				h = aux;
				finish = 0;
				goto i;
			}
		}
		if (finish == 0)
			print_array(array, size);
	}
}
