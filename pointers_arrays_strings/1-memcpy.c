#include "main.h"

/**
* _memcpy - fills memory with a constant byte
* @dest: to memory area
* @src: from memory area
* @n: n bytes of memory
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
