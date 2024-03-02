#include "main.h"

/**
* _strncat - concatenate 2 strings
* @dest: string s1
* @src: string s2
* @n: number of bytes
* Return: string of dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int sizeDest = _strlen(dest);

	for (i = 0; i < n; i++)
	dest[sizeDest + i] = src[i];

	return (dest);
}

/**
* _strlen - return string length
* @s: string
* Return: number of caracters
*/

int _strlen(char *s)
{
	int nombreCaract;

	for (nombreCaract = 0 ; s[nombreCaract] != '\0' ; nombreCaract++)
	{
	}

	return (nombreCaract);
}
