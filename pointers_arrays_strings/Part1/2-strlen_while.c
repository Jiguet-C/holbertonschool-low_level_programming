#include "main.h"

/**
* _strlen - length of a string
* @s: string
* Return: number of char
*/

int _strlen(char *s)
{
	int nombreDeCaracteres = 0;

	while (*s != '\0')
	{
		nombreDeCaracteres++;
		s++;
	}
	return (nombreDeCaracteres);
}
