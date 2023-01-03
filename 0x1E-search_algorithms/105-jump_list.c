#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
* jump_list - function that searches for a value in a sorted list of
* integers using the Jump search algorithm
* @list: a pointer to the head of the list to search in
* @size: the number of nodes in list
* @value: the value to search for
*
* Return: NULL if value is not present in head or if head is NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx, x, y;
	listint_t *node;

	if (list == NULL || size == 0)
		return (NULL);

	y = (size_t)sqrt((double)size);
	idx = 0;
	x = 0;

	do {
		node = list;
		x++;
		idx = x * y;

		while (list->next && list->idx < idx)
			list = list->next;

		if (list->next == NULL && idx != list->idx)
			idx = list->idx;

		printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);

	} while (idx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)node->idx, (int)list->idx);

	for (; node && node->idx <= list->idx; node = node->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)node->idx, node->n);
		if (node->n == value)
			return (node);
	}

	return (NULL);
}
