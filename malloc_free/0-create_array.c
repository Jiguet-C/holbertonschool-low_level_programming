#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars initializes it with a specific char
 * @size: size of array
 * @c: character
 * Return: NULL if size 0 or it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
		return (NULL);

	buffer = malloc(sizeof(unsigned char) * size);

	for (i = 0; i < size; i++)
	buffer[i] = c;

	if (buffer == NULL)
		return (NULL);
	else
		return (buffer);
}
