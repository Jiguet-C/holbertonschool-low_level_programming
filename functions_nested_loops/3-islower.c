#include "main.h"

/**
* _islower - lowercase character
* @c: caractere
* Return: Always 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
