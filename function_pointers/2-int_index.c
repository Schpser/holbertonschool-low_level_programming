#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function to be used.
 *
 * Return: The index of the first element for which cmp does not return 0.
 *		If no element matches or if size <= 0, returns -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size ; i++)
	{
		int result = cmp(array[i]);

		if (result != 0)
		{
			return (i);
		}
	}
	return (-1);

}
