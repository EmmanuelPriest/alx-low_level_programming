#include "lists.h"

/**
* get_dnodeint_at_index - function that returns the nth
* node of a dlistint_t linked list
* @head: head pointer to dlistint_t list.
* @index: index of the node
*
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
