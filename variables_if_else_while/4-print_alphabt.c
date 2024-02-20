#include <stdio.h>
/**
 * main - Entry point
 * Description: 'putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lettre;

	lettre = 'a';
	while (lettre <= 'z')
	{
		if ((lettre == 'e') || (lettre == 'q'))
		{
		lettre++;
		continue;
		}
	putchar(lettre++);
	}

	putchar('\n');
	return (0);
}
