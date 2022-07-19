#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void free_listz(listz_t **head);

/**
* free_listp - function to free a linked list
* @head: double pointer head to a linked list
*
* Return: nothing
*/
void free_listz(listz_t **head)
{
	listz_t *count, *meet;

	if (head != NULL)
	{
		meet = *head;

		while ((count = meet) != NULL)
		{
			meet = meet->next;
			free(count);
		}
		*head = NULL;
	}
}

/**
* print_listint_safe - function that prints a listint_t linked list
* @head: pointer head to listint_t linked list
*
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t newNode = 0;
	listz_t *i, *new, *m;

	i = NULL;

	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->z = (void *)head;
		new->next = i;
		i = new;

		m = i;

		while (m->next != NULL)
		{
			m = m->next;
			if (head == m->z)
			{
				printf("-> [%p] %d'\n", (void *)head, head->n);
				free_list(&i);
				return (newNode);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		newNode++;
	}

	free_listz(&i);
	return (newNode);
}
