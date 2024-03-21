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
	int num;
	unsigned int index;
	va_list numbers;

	if (n != 0)
	{
		num = 0;
		va_start(numbers, n);

		for (index = 0; index < n; index++)
		{
			num = va_arg(numbers, int);
			printf("%d", num);
			if (separator != NULL && index < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(numbers);
	}
}
