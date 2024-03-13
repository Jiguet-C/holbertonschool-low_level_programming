#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: number mini
 * @max: number maxi
 * Return: NULL or a pointer to the array
 */

int *array_range(int min, int max)
{
	int i;
	int *buffer;
	int size;
	int number;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	buffer = malloc(sizeof(int) * size);
	if (buffer == NULL)
		return (NULL);

	for (i = 0, number = min; number <= max; i++, number++)
		buffer[i] = number;

	return (buffer);
}
