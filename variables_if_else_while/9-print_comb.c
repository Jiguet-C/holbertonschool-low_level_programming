#include <stdio.h>
/**
 * main - Entry point
 * Description: 'putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n  <= '9'; n++)
	{
	putchar(n);
	if (n != '9')
		{
		putchar(',');
		putchar(' ');
		continue;
		}
	}
	putchar('\n');
	return (0);
}
