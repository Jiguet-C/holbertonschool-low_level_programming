#include "main.h"

/**
 *factorial - returns the factorial of a given number
 *@n: integer
 *Return: result of n*(n-1)!
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1=)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}