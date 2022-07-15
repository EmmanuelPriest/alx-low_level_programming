#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
* *add_node - function that adds a new node at the beginning of a list_t list
* @str: pointer to be duplicated
* @head: double pointer to the beginning of the list
*
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newElement;
	unsigned int n = 0;

	newElement = malloc(sizeof(list_t));
	if (newElement == NULL)
	{
		return (NULL);
	}
	newElement->str = strdup(str);

	while (str[n] != '\0')
		n++;
	newElement->len = n;
	newElement->next = *head;
	*head = newElement;
	return (*head);
}
