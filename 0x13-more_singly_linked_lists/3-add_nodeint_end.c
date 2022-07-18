#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* *add_nodeint_end - function that adds a new node at
* the end of a listint_t list
* @head: double pointer to listint_t list
* @n: n element
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *count;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	count = *head;

	while (count->next != NULL)
		count = count->next;
	count->next = new;
	return (*head);
}
