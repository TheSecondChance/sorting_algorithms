#include "sort.h"

/**
 * bubble_sort - sorting array using bubble sorting method
 * @array: the array to be sorted
 * @size: size of the array element
 * Return: 0.
 */

void bubble_sort(int *array, size_t size)
{
	int kotari = 1, lewach;
	size_t l, j;

	for (j = 0; j < size; j++)
	{
		kotari = 0;
		for (l = 0; l < size - 1; l++)
		{
			if (array[l] > array[l + 1])
			{
				kotari++;
				lewach = array[l];
				array[l] = array[l + 1];
				array[l + 1] = lewach;
				print_array(array, size);
			}
		}
		if (kotari == 0)
			break;
	}
}
