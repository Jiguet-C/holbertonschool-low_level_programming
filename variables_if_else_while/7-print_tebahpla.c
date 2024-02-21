#include <stdio.h>
/**
 * main - Entry point
 * Description: 'putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lettre;

	lettre = 'z';
	while (lettre >= 'a')
	putchar(lettre--);

	putchar('\n');
	return (0);
}
