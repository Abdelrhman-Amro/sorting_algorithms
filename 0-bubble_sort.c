#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array of integers to be sorted
 * @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	int sorted, temp = 0;
	size_t nsteps, idx;

	for (nsteps = 1; nsteps < size; nsteps++)
	{
		sorted = 1;
		for (idx = 0; idx < (size - nsteps); idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				temp = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = temp;
				sorted = 0;
				print_array(array, size);
			}
		}
		if (sorted)
			break;
	}
}
