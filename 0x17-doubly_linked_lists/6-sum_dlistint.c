#include "lists.h"

/**
* sum_dlistint - function that returns the sum of all the data
* (n) of a dlistint_t linked list
* @head: head pointer to dlistint_t list.
*
* Return: 0 if the list is empty, otherwise the sum of all the data
*/
int sum_dlistint(dlistint_t *head)
{
	int sum_data;

	sum_data = 0;

	while (head)
	{
		sum_data = sum_data + head->n;
		head = head->next;
	}

	return (sum_data);
}
