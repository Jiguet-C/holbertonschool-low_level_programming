#include "main.h"

/**
* _strlen - return string length
* _strcat - concatenate 2 strings
* @dest: string
* @src: string
* @s: string
* Return: pointer to dest
*/

int _strlen(char *s);

char *_strcat(char *dest, char *src)
{
	int i;
	int sizeDest = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	dest[sizeDest + i] = src[i];

	return (dest);
}

int _strlen(char *s)
{
	int nombreCaract;

	for (nombreCaract = 0 ; s[nombreCaract] != '\0' ; nombreCaract++)
	{
	}

	return (nombreCaract);
}
