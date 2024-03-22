#include "variadic_functions.h"

/**
 * print_all - prints anything, followed by a new line
 * @format: list of types of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int index;
	char caract;
	char *ptr_string;
	va_list anything;

	va_start(anything, format);

	index = 0;

	while (format && format[index])
	{
		caract = format[index];
		switch (caract)
		{
			case 'caract':
				printf("%caract", va_arg(anything, int));
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
		if ((caract == 'caract' || caract == 'i' || caract == 'f'
		|| caract == 's') && format[index + 1] != '\0')
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(anything);
}
