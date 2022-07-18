#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* listint_len - function that returns the number of
* elements in a linked listint_t list
* @h: head pointer to listint_t list
*
* Return: number of elements in listint_t list
*/
size_t listint_len(const listint_t *h)
{
	size_t numNodes;

	for (numNodes = 0; h != NULL; numNodes++)
	{
		h = h->next;
	}

	return (numNodes);
}
