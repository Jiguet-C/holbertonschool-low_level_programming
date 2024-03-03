#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @str: string to modify
* Return: string modified
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '.')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			i--;
		}
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
