#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* free_listint_safe - function that frees a listint_t list
* @h: double pointer head to listint_t list
*
* Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	int cross, headNode;
	listint_t *count;

	if (h == NULL || *h == NULL)
		return (0);
	for (headNode = 0; *h; headNode++)
	{
		cross = *h - (*h)->next;
		if (cross > 0)
		{
			count = *h;
			*h = (*h)->next;
			free(count);
		}
		else
		{
			free(*h);
			headNode++;
			break;
		}
	}
	*h = NULL;

	return (headNode);
}
