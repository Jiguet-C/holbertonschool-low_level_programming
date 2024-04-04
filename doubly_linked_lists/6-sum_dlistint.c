#include "lists.h"

/**
 * sum_dlistint - Sum of all the data (n) of a dlistint_t list
 * @head: The head of the linked list.
 * Return: Sum, otherwise NULL
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptrNode;

	ptrNode = head;

	while (ptrNode != NULL)
	{
		sum += ptrNode->n;
		ptrNode = ptrNode->next;
	}
	return (sum);
}
