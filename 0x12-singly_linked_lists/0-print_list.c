#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_list - function that prints all the elements of a list_t list
* @h: head pointer
*
* Return: the number of nodes
* If str is NULL, print [0] (nil)
*/
size_t print_list(const list_t *h)
{
	size_t constant = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			constant++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			constant++;
		}
	}
	return (constant);
}
