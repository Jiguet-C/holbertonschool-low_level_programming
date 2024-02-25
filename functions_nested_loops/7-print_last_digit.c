#include "main.h"

/**
* print_last_digit - last digit
* @n: number
* Return: Last digit of n
*/

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
		digit = digit * -1;
	_putchar('0' + digit);
	return (digit);
}
