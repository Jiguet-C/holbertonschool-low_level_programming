#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: integer
* @b: integer
* Return: Always 0
*/

void swap_int(int *a, int *b)
{
	int temporaire;

	temporaire = *a;
	*a = *b;
	*b = temporaire;
}
