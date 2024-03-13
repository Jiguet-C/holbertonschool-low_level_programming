#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: number of bytes of an element
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *buffer;

	if (size == 0 || nmemb == 0)
		return (NULL);

	buffer = malloc(nmemb * size);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		buffer[i] = 0;

	return (buffer);
}
