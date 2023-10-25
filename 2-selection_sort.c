#include "sort.h"
/**
 * swap - This for Swap two int in an array
 * @swap1: The first int to swap
 * @swap2: The second int to swap.
 */
void swap(int *swap1, int *swap2)
{
	int temp;

	temp = *swap1;
	*swap1 = *swap2;
	*swap2 = temp;
}

/**
 * selection_sort - Sort an array of int in ascending order using selection
 * @array: This for array of int.
 * @size: The size of the array.
 *
 * Return: 0.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;


	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		int current_po = i;

		for (j = i + 1; j < size; j++)
			if (array[j] < array[current_po])
				current_po = j;
		if (current_po != i)
		{
			swap(&array[i], &array[current_po]);
			print_array(array, size);
		}
	}
}
