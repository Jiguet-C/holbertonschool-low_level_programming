#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int indexPower;
	unsigned long int result;
	unsigned long int binary;

	indexPower = 0;
	result = n;
	binary = 1 << indexPower;

	if (n == 0)
		_putchar('0');

	if (n > 0)
	{
		while (n >= binary)
		{
			indexPower++;
			binary = 1 << indexPower;
		}
	}

	while (indexPower > 0)
	{
		indexPower--;
		binary = 1 << indexPower;

		if (result >= binary)
		{
			result -= binary;
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
