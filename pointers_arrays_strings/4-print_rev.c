#include "main.h"

/**
* print_rev - prints in reverse
* @s: string
* Return: void
*/

void print_rev(char *s)
{
	int i;
	int nombreCaract;

	for (nombreCaract = 0 ; s[nombreCaract] != '\0' ; nombreCaract++)
	{
	}
	for (i = (nombreCaract - 1) ; i >= 0 ; i--)
		_putchar(s[i]);

	_putchar('\n');
}
