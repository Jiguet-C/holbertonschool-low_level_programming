#include "main.h"

/**
* _puts - prints a string
* @str: string
* Return: void
*/

void _puts(char *str)
{
	int i;
	int nombreDeCaracteres;

	for (nombreDeCaracteres = 0 ; str[nombreDeCaracteres] != '\0' ; nombreDeCaracteres++)
	{
	}
	for (i = 0 ; i < nombreDeCaracteres ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
