#include "lists.h"

/**
* print_dlistint - function that prints all the elements of a dlistint_t list
* @h: head pointer to dlistint_t list.
*
* Return: number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nd;

	nd = 0;

	while (h)
	{
		nd++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nd);
}
