#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
* *reverse_listint - function that reverses a listint_t linked list
* @head: double pointer head to listint_t linked list
*
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n, *m;

	n = NULL;
	m = NULL;

	while (*head != NULL)
	{
		m = (*head)->next;
		(*head)->next = n;
		n = *head;
		*head = m;
	}

	*head = n;

	return (*head);
}
