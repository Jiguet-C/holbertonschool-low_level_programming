#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: Always 0
*/

void more_numbers(void)
{
	int nombre;
	int i;

	for (i = 1; i <= 10 ; i++)
	{
		for (nombre = 0; nombre <= 14; nombre++)
		{
			if (nombre >= 10)
				_putchar('1');
			_putchar('0' + (nombre % 10));
		}
		_putchar('\n');
	}
}
