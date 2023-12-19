#include "sort.h"

/**
 * swap - swaps the value of variables
 * @first_var: The first variables to swap
 * @second_var: The second variable to swap
 * Return: void
 */
void swap(int *first_var, int *second_var)
{
	int tmp;

	tmp = *first_var;
	*first_var = *second_var;
	*second_var = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
