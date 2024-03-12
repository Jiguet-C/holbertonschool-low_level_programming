#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* _strlen - length of a string
* @s: string
* Return: number of char
*/

int _strlen(char *s)
{
	int nombreCaract = 0;

	while (*s != '\0')
	{
		nombreCaract++;
		s++;
	}

	return (nombreCaract);
}

/**
 * _strdup - returns a pointer to a newly memory - copy of the string
 * @str: string
 * Return: NULL if size 0 or it fails
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size;
	char *buffer;

	size = _strlen(str) + 1;

	buffer = malloc(sizeof(unsigned char) * size);

	if (size == 0 || buffer == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = str[i];

	return (buffer);
}