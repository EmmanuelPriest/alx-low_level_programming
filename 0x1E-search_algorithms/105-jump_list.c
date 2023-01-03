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
	size_t index, x, y;
	listint_t *node;

	if (list == NULL || size == 0)
		return (NULL);

	y = (size_t)sqrt((double)size);
	index = 0;
	x = 0;

	do {
		node = list;
		x++;
		index = x * y;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)node->index, (int)list->index);

	for (; node && node->index <= list->index; node = node->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
		if (node->n == value)
			return (node);
	}

	return (NULL);
}
