#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* free_listint - function that frees a listint_t list
* @head: head pointer to listint_t list
*
* Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *count;

	while ((count = head) != NULL)
	{
		head = head->next;
		free(count);
	}
}
