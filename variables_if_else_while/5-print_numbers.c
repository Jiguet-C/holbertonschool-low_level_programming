#include <stdio.h>
/**
 * main - Entry point
 * Description: 'putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;

	n = '0';
	while (n <= '9')
	putchar(n++);

	putchar('\n');
	return (0);
}
