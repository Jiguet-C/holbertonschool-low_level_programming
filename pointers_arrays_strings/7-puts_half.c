#include "main.h"

/**
* puts_half - prints an half string
* @str: string
* Return: void
*/

void puts_half(char *str)
{
	int i;
	int nombreCaract;

	for (nombreCaract = 0 ; str[nombreCaract] != '\0' ; nombreCaract++)
	{
	}

	if ((nombreCaract % 2) == 0)
		for (i = (nombreCaract / 2) ; i >= (nombreCaract / 2) && i <= nombreCaract ; i++)
			_putchar(str[i]);
	else
		for (i = (nombreCaract / 2) ; i >= ((nombreCaract - 1) / 2) && i <= nombreCaract ; i++)
			_putchar(str[i]);

	_putchar('\n');
}
