#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, res;

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	res = arg1 * arg2;
	printf("%d\n", res);

	return (0);
}
