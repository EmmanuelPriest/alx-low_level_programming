#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* sum_listint - function that returns the sum of all
* the data (n) of a listint_t linked list
* @head: head pointer to listint_t linked list
*
* Return: 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	int add;

	for (add = 0; head != NULL; add++)
	{
		add = add + head->n;
		head = head->next;
	}

	return (add);
}
