#include "main.h"

/**
 *_multiplicate_recursion - returns natural square root
 *@n: natural square root
 *@square: incrementation
 *Return: result
*/

int _multiplicate_recursion(int n, int square)
{
	if ((square * square) < n)
		return (_multiplicate_recursion(n, square + 1));
	if ((square * square) == n)
		return (square);

	return (-1);
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: natural square root
 *Return: result
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_multiplicate_recursion(n, 1));
}
