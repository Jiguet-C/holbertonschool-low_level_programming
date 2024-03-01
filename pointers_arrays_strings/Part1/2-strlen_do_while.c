#include "main.h"

/**
* _strlen - length of a string
* @s: string
* Return: number of char
*/

int _strlen(char *s)
{
	int nombreDeCaracteres = 0;
	char caractereActuel = 0;

	do {
		caractereActuel = s[nombreDeCaracteres];
		nombreDeCaracteres++;
	} while (caractereActuel != '\0');

	nombreDeCaracteres--;
	return (nombreDeCaracteres);
}
