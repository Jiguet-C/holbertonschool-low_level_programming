#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: array size
 * @cmp: function
 *
 * Return: index or -1 if false.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != NULL || size > 0 || cmp != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
				return (index);
		}
		return (-1);
	}
	return (-1);
}
