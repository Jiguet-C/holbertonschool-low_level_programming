#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - incrementation ou decrementation
 * @n: integer
 * Return: number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
	else
	{
		printf("%d\n", n);
	}
}
