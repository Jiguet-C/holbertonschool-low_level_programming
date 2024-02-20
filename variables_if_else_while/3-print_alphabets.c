#include <stdio.h>
/**
 * main - Entry point
 * Description: 'putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lettre;
	char LETTRE;

	lettre = 'a';
	while (lettre <= 'z')
	putchar(lettre++);

	LETTRE = 'A';
	while (LETTRE <= 'Z')
	putchar(LETTRE++);

	putchar('\n');
	return (0);
}
