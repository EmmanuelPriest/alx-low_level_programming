#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* print_listint - function that prints all the elements of a listint_t list
* @h: head pointer to listint_t list
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t numNodes;

	for (numNodes = 0; h != NULL; numNodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (numNodes);
}
