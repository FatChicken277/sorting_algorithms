#include "sort.h"
/**
 * shell_sort - sort an array
 * @array: array to sort
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	int interval = 1, i, j, aux, sw;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (interval = interval * 3 + 1; interval > 0; interval = (interval - 1) / 3)
	{
		sw = 1;
		for (i = interval; i < (int)size; i++)
		{
			aux = array[i];
			for (j = i; j >= interval && array[j - interval] > aux; j = j - interval)
			{
				array[j] = array[j - interval];
				sw = 0;
			}
			array[j] = aux;
		}
		if (sw == 0)
		{
			print_array(array, size);
		}
	}
}
