#include "sort.h"

/**
 * selection_sort - uses the selection algo to sort
 * an array
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_val, min_index, flag, holder;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min_val = array[i];
		min_index = i;
		flag = 0;

		for (j = i + 1; j < size; j++)	/* start from the unsorted part */
		{
			if (min_val > array[j])  /* check for min value */
			{
				min_val = array[j];
				min_index = j;
				flag = 1;
			}
		}

		if (flag)
		{
			holder = array[i];
			array[i] = array[min_index];
			array[min_index] = holder;
			print_array(array, size);
		}
	}
}
