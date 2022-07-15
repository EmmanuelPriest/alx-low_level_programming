#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
* free_list - function that frees a list_t list
* @head: head pointer
*
* Return: nothing
*/
void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}
}
