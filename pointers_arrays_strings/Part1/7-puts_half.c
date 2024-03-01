#include "main.h"

/**
* puts_half - prints an half string
* @str: string
* Return: void
*/

void puts_half(char *str)
{
	int i;
	int nbCar;

	for (nbCar = 0 ; str[nbCar] != '\0' ; nbCar++)
	{
	}

	if ((nbCar % 2) == 0)
		for (i = (nbCar / 2) ; i >= (nbCar / 2) && i < nbCar ; i++)
			_putchar(str[i]);
	else
		for (i = ((nbCar + 1) / 2) ; i >= ((nbCar + 1) / 2) && i < nbCar ; i++)
			_putchar(str[i]);

	_putchar('\n');
}
