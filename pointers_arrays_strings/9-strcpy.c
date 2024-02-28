#include "main.h"

/**
* _strcpy - copies the string
* @dest: string
* @src: string
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int nombreCaract;

	for (nombreCaract = 0 ; src[nombreCaract] != '\0' ; nombreCaract++)
	{
	}

	for (i = 0; i < nombreCaract; i++)
		dest[i] = src[i];

	return (dest);
}
