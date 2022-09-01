#include "lists.h"

/**
* add_dnodeint - function that adds a new node at the
* beginning of a dlistint_t list
* @head: double head pointer to dlistint_t list
* @n: constant integer variable
*
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nd;

	new_nd = malloc(sizeof(dlistint_t));
	if (new_nd == NULL)
		return (NULL);

	new_nd->n = n;
	new_nd->prev = NULL;
	new_nd->next = *head;
	if (*head != NULL)
		(*head)->prev = new_nd;
	*head = new_nd;

	return (new_nd);
}
