#include "main.h"

/**
* print_numbers - print numbers
* Return: Always 0
*/

void print_numbers(void)
{
	int nombre;

	for (nombre = '0'; nombre <= '9'; nombre++)
		_putchar(nombre);

	_putchar('\n');
}
