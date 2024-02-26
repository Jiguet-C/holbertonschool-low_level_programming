#include "main.h"

/**
*times_table - conjugaison
*
*Return: void
*/

void times_table(void)
{
	int x;
	int y;

	while (x <= 11)
	{
		y = 0;
		while (y < 11)
		{
			_putchar();

		for (h = 0; h <= 9; h++)
		{
			if ((h10 <= 1 && h <= 9) || (h10 <= 2 && h <= 3))
			{
				for (min10 = 0; min10 <= 5; min10++)
				{
					for (min = 0; min <= 9; min++)
					{
						_putchar (h10 + '0');
						_putchar (h + '0');
						_putchar (':');
						_putchar (min10 + '0');
						_putchar (min + '0');
						_putchar ('\n');
					}
				}
			}
		}
	}
}
