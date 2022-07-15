#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
* *add_node_end - function that adds a new node at the end of a list_t list
* @str: pointer that needs to be duplicated
* @head: double pointer at the beginning of the list
*
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newElement;
	list_t *endElement;
	unsigned int n = 0;

	if (*head == NULL)
	{
		newElement = malloc(sizeof(list_t));
		if (newElement == NULL)
			return (NULL);
		newElement->next = NULL;
		*head = newElement;
		newElement->str = strdup(str);
		while (str[n] != '\0')
			n++;
		newElement->len = n;
	}
	else
	{
		endElement = *head;
		while (1)
		{
			if (endElement->next == NULL)
				break;
			endElement = endElement->next;
		}
		newElement = malloc(sizeof(list_t));
		if (newElement == NULL)
			return (NULL);
		newElement->next = NULL;
		endElement->next = newElement;
		newElement->str = strdup(str);
		while (str[n] != '\0')
			n++;
		newElement->len = n;
	}
	return (newElement);
}
