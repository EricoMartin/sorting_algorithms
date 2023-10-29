#include "sort.h"

/*
 * bubble_sort - A function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 * @array: An array of integers
 * @size: The number of elements in the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	int flag;
	size_t i;

	if (size < 2)
		return;
	do
	{
		flag = 0;

		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i-1] = array[i];
				array[i] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
	} while (flag);
}
