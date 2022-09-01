#include "lists.h"

/**
* insert_dnodeint_at_index - function that inserts a new node at
* a given position
* @h: head pointer to dlistint_t list
* @idx: index of the list where the new node should be added
* @n: int variable of the new node
*
* Return: address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nd;
	dlistint_t *head;
	unsigned int m;

	new_nd = NULL;
	if (idx == 0)
		new_nd = add_dnodeint(h, n);
	else
	{
		head = *h;
		m = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (m == idx)
			{
				if (head->next == NULL)
					new_nd = add_dnodeint_end(h, n);
				else
				{
					new_nd = malloc(sizeof(dlistint_t));
					if (new_nd != NULL)
					{
						new_nd->n = n;
						new_nd->next = head->next;
						new_nd->prev = head;
						head->next->prev = new_nd;
						head->next = new_nd;
					}
				}
				break;
			}
			head = head->next;
			m++;
		}
	}

	return (new_nd);
}
