#include "main.h"

/**
* puts_half - prints an half string
* @str: string
* Return: void
*/

void puts_half(char *str)
{
	int i;
	int nbCaract;

	for (nbCaract = 0 ; str[nbCaract] != '\0' ; nbCaract++)
	{
	}

	if ((nbCaract % 2) == 0)
		for (i = (nbCaract / 2) ; i >= (nbCaract / 2) && i < nbCaract ; i++)
			_putchar(str[i]);
	else
		for (i = (nbCaract / 2) ; i >= ((nbCaract - 1) / 2) && i < nbCaract ; i++)
			_putchar(str[i]);

	_putchar('\n');
}
