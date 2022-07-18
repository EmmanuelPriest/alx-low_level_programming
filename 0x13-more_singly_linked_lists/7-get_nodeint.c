#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* *get_nodeint_at_index - function that returns the nth
* node of a listint_t linked list
* @head: head pointer to listint_t linked list
* @index: the index of the node, starting at 0
*
* Return: NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (n < index && head != NULL)
	{
		head = head->next;
		n++;
	}

	return (head);
}
