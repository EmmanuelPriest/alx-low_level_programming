#include "lists.h"

/**
* add_dnodeint_end - function that adds a new node at the
* end of a dlistint_t list
* @head: double head pointer to dlistint_t list.
* @n: constant integer variable
*
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nd, *last_nd;

	new_nd = malloc(sizeof(dlistint_t));
	if (new_nd == NULL)
		return (NULL);

	new_nd->n = n;
	new_nd->next = NULL;

	if (*head == NULL)
	{
		new_nd->prev = NULL;
		*head = new_nd;
		return (new_nd);
	}

	last_nd = *head;
	while (last_nd->next != NULL)
		last_nd = last_nd->next;
	last_nd->next = new_nd;
	new_nd->prev = last_nd;

	return (new_nd);
}
