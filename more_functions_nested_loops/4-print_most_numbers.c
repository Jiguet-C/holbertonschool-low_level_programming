#include "main.h"

/**
* print_most_numbers - print most numbers
* Return: Always 0
*/

void print_most_numbers(void)
{
	int nombre;

	for (nombre = '0'; nombre <= '9'; nombre++)
		if (nombre == '2' || nombre == '4')
			continue;
		else
			_putchar(nombre);

	_putchar('\n');
}
