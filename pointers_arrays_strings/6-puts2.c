#include "main.h"

/**
* puts2 - prints a string
* @str: string
* Return: void
*/

void puts2(char *str)
{
	int i;
	int nombreCaract;

	for (nombreCaract = 0 ; str[nombreCaract] != '\0' ; nombreCaract++)
	{
	}
	for (i = 0 ; i < nombreCaract ; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
