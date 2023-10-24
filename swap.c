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
