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
	size_t x, y;
	listint_t *nd, *jumper;

	if (list == NULL || size == 0)
		return (NULL);

	x = 0;
	y = sqrt(size);
	for (nd = jumper = list; jumper->index + 1 < x && jumper->n < value;)
	{
		nd = jumper;
		for (x += y; jumper->index < x; jumper = jumper->next)
		{
			if (jumper->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jumper->index, jumper->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			nd->index, jumper->index);

	for (; nd->index < jumper->index && nd->n < value; nd = nd->next)
		printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
	printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);

	return (nd->n == value ? nd : NULL);
}
