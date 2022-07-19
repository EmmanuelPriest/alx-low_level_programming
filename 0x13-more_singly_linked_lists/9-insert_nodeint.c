#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* *insert_nodeint_at_index - function that inserts
* a new node at a given position
*
* @head: double head point to listint_t
* @n: n element
* @idx: the index of the list where the new node should be added
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *new, *y;

	y = *head;

	if (idx != 0)
	{
		while (x < idx - 1 && y != NULL)
		{
			y = y->next;
			x++;
		}
	}

	if (y == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = y->next;
		y->next = new;
	}

	return (new);
}
