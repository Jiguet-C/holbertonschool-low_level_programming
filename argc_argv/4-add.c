#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int arg1, res;
	int i;

	if (argc == 1)
		puts("0");
	else
	{
		for (i = 1; i < argc; i++)
		{
			arg1 = atoi(argv[i]);
			res = res + arg1;
		}
		printf("%d\n", res);
	}
	return (0);
}
