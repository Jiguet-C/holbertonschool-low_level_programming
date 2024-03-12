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
 * str_concat - concatenates two strings
 * @s1: string start
 * @s2: string end
 * Return: NULL or pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int size1;
	unsigned int size2;
	unsigned int sizeAll;
	char *buffer;

	if (s1 == NULL || s2 == NULL)
		return ("");

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	sizeAll = size1 + size2 + 1;
	buffer = malloc(sizeof(unsigned char) * sizeAll);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		buffer[i] = s1[i];

	for (j = 0; j < size2; j++)
		buffer[size1 + j] = s2[j];

	buffer[sizeAll - 1] = '\0';

	return (buffer);
}
