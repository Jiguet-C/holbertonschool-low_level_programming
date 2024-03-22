#include "variadic_functions.h"

/**
 * print_all - prints anything, followed by a new line
 * @format: list of types of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	char c;
	char *ptr_string;
	va_list anything;

	va_start(anything, format);

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(anything, int));
				break;
			case 'i':
				printf("%d", va_arg(anything, int));
				break;
			case 'f':
				printf("%f", va_arg(anything, double));
				break;
			case 's':
				ptr_string = va_arg(anything, char *);
				if (ptr_string == NULL)
					printf("(nil)");
				printf("%s", ptr_string);
				break;
		}
		if ((c == 'c' || c == 'i' || c == 'f' || c == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(anything);
}
