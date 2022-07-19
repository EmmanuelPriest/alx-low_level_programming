#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index - function that deletes the node at index
* index of a listint_t linked list
* @head: double pointer head to listint_t linked list
* @index: the index of the node that should be deleted
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *y, *next;

	y = *head;

	if (index != 0)
	{
		while (x < index - 1 && y != NULL)
		{
			y = y->next;
			x++;
		}
	}

	if (y == NULL || (y->next == NULL && index != 0))
	{
		return (-1);
	}

	next = y->next;

	if (index != 0)
	{
		y->next = next->next;
		free(next);
	}
	else
	{
		free(y);
		*head = next;
	}

	return (1);
}
