#include "lists.h"

/**
* dlistint_len - function that returns the number of elements in a
* linked dlistint_t list
* @h: head of the list
*
* Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int num_nd = 0;

	if (h == NULL)
		return (num_nd);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		num_nd++;
		h = h->next;
	}

	return (num_nd);
}
