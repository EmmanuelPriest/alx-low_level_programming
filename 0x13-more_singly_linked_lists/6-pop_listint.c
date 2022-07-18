#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* pop_listint - function that deletes the head node of a listint_t linked list
* @head: double head pointer to listint_t linked list
*
* Return: 0 if the linked list is empty
*/
int pop_listint(listint_t **head)
{
	int headNode;
	listint_t *n, *m;

	if (*head == NULL)
	{
		return (0);
	}

	m = *head;
	headNode = m->n;
	n = m->next;
	free(m);
	*head = n;

	return (headNode);
}
