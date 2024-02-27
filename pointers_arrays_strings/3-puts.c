#include "main.h"

/**
* _puts - prints a string
* @str: string
* Return: void
*/

void _puts(char *str)
{
	int i;
	int nombreCaract;

	for (nombreCaract = 0 ; str[nombreCaract] != '\0' ; nombreCaract++)
	{
	}
	for (i = 0 ; i < nombreCaract ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
