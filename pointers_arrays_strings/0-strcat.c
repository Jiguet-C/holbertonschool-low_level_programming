#include "main.h"

/**
* _strcat - concatenate 2 strings
* @dest: string s1
* @src: string s2
* Return: string of dest
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int sizeDest = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
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
