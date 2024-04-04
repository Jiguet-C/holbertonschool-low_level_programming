#include "lists.h"

/**
 * print_dlistint - Print double linked list
 * @h: list_t list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->n == 0)
		{
			printf("0\n");
			h = h->next;
			nodes++;
		}
		else
		{
			printf("%d\n", h->n);
			h = h->next;
			nodes++;
		}
	}
	return (nodes);
}
