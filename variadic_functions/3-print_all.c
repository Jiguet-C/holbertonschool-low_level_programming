#include "variadic_functions.h"

/**
 * print_all - prints anything, followed by a new line
 * @format: list of types of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int index;
	char caracterFormat;
	char *ptr_string;
	va_list anything;

	va_start(anything, format);

	index = 0;

	while (format && format[index])
	{
		caracterFormat = format[index];
		switch (caracterFormat)
		{
			case 'c':
				printf("%c", va_arg(anything, int));
				break;
			case 'i':
				printf("%d", va_arg(anything, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(anything, double));
				break;
			case 's':
				ptr_string = va_arg(anything, char *);
				if (ptr_string == NULL)
					printf("(nil)");
				else
					printf("%s", ptr_string);
		}
		if ((caracterFormat == 'c' || caracterFormat == 'i' || caracterFormat == 'f'
			|| caracterFormat == 's') && format[index + 1] != '\0')
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(anything);
}
