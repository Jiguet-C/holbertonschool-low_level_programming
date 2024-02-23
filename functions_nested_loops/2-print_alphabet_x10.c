#include "main.h"

/**
* print_alphabet_x10 - print alphabet x10
*
* Return: Always 0
*/

void print_alphabet_x10(void)
{
	char lettre;
	int x10;

	for (x10 = 1; x10 <= 10; x10++)
	{
		for (lettre = 'a'; lettre <= 'z'; lettre++)
			_putchar(lettre);
		_putchar('\n');
	}
}
