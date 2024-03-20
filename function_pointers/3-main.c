#include "3-calc.h"

/**
 * main - program that prints the result of simple operations
 *
 * @argc: number of arguments
 * @argv: value of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int (*ptrOperator)(int a, int b);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	ptrOperator = get_op_func(argv[2]);

	if (ptrOperator == NULL)
	{
		puts("Error");
		exit(99);
	}

	printf("%d\n", ptrOperator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
