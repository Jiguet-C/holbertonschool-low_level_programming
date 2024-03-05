#include "main.h"

/**
* print_chessboard - searches a string for any of a set of bytes
* @a: number of row
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8 ; i++)
	{
		for (j = 8; j > 0; j--)
		{
			_putchar(a[i][8 - j]);
		}
		_putchar('\n');
	}
}
