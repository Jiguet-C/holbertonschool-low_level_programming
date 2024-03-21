#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: pointer separator
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *ptr_string;
	va_list strings;

	if (n != 0)
	{
		va_start(strings, n);

		for (index = 0; index < n; index++)
		{
			ptr_string = va_arg(strings, char *);

			if (ptr_string == NULL)
				printf("(nil)");
			else
				printf("%s", ptr_string);

			if (separator != NULL && index != n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(strings);
	}
}
