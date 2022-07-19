#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
* *find_listint_loop - function that finds the loop in a linked list
* @head: pointer head to listint_t list
*
* Return: The address of the node where the loop starts,
* or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *headNode, *count;

	if (head == NULL || head->next == NULL)
		return (NULL);

	headNode = head->next;
	count = (head->next)->next;

	while (count)
	{
		if (headNode == count)
		{
			headNode = head;

			while (headNode != count)
			{
				headNode = headNode->next;
				count = count->next;
			}

			return (headNode);
		}

		headNode = headNode->next;
		count = (count->next)->next;
	}

	return (NULL);
}
