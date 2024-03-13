#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: numbers of bytes
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *buffer;

	buffer = malloc(b);

	if (buffer == NULL)
		exit(98);

	return (buffer);
}
