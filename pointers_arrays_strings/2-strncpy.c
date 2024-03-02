#include "main.h"

/**
* _strncpy - copy a string
* @dest: string s1
* @src: string s2
* @n: number of bytes
* Return: string of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int sizeSrc = _strlen(src);

	for (i = 0; i < n; i++)
	{
		if (i < sizeSrc)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
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
