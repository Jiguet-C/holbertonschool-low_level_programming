#include <stdio.h>
/**
 * main - Entry point
 * Description: 'putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char lettre;

	n = '0';
	while (n <= '9')
	putchar(n++);

	lettre = 'a';
	while (lettre <= 'f')
	putchar(lettre++);

	putchar('\n');
	return (0);
}
