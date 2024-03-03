#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: an array of integers
* @n: the number of elements to swap
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int tmp[n];

	for (i = 0; n > i; i++)
		tmp[i] = a[(n - 1) - i];
	for (i = 0; n > i; i++)
		a[i] = tmp[i];
}

/**
* _strlen - return string length
* @s: string
* Return: number of caracters
*/

int _strlen(char *s)
{
	int nombreCaract;

	for (nombreCaract = 0 ; s[nombreCaract] != '\0' ; nombreCaract++)
	{
	}

	return (nombreCaract);
}
