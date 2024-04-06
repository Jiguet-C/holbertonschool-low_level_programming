#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node at the index
 * @idx: the index
 * @h: the head of the list
 * @n: the data to add
 *
 * Return: the list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tmp;
	unsigned int index;

	newNode = (struct dlistint_s *)malloc(sizeof(struct dlistint_s));

	if (h == NULL || newNode == NULL)
		return (0);

	tmp = *h;

	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}

	newNode->n = n;

	for (index = 0; index < idx - 1 ; index++)
	{
		if (tmp != NULL)
			tmp = tmp->next;
		else
			return (0);
	}

	newNode->next = tmp->next;
	tmp->next = newNode;

	newNode->prev = tmp;

	if (newNode->next != NULL)
		newNode->next->prev = newNode;

	return (newNode);
}
