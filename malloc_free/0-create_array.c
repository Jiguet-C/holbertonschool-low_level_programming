#include "main.h"
#include <stddef.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: character
 * Return: NULL if size 0 or it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int *buffer;

	if (size == 0)
		return (NULL);

	buffer = malloc(sizeof(unsigned char) * size);
	*buffer = c;

	return (buffer);
}
