#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint2 - function that frees a listint_t list
* @head: double pointer head to listint_t list
*
* Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *n, *m;

	if (head != NULL)
	{
		m = *head;

		while ((n = m) != NULL)
		{
			m = m->next;
			free(n);
		}
		*head = NULL;
	}
}
