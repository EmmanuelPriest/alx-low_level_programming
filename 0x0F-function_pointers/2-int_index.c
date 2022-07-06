#include "function_pointers.h"

/**
* int_index - function that searches for an integer
* @size: the number of elements in the array array
* @cmp: pointer to the function to be used to compare values
* @array: array pointer
*
* Return: index of the first element for which the
* cmp function does not return 0
* If no element matches, return -1
* If size <= 0, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (n = 0; n < size; n++)
			if (cmp(array[n]))
			{
				return (n);
			}
	}

	return (-1);
}
