#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer separator
 * @n: number
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list numbers;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator != NULL && index != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
