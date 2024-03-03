#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @str: string to modify
* Return: string on uppercase
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
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
