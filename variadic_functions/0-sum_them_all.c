#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number
 *
 * Return: result of sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int totalSum;
	unsigned int index;
	va_list numbers;

	if (n == 0)
		return (0);

	totalSum = 0;
	va_start(numbers, n);

	for (index = 0; index < n; index++)
		totalSum += va_arg(numbers, int);

	va_end(numbers);

	return (totalSum);
}
