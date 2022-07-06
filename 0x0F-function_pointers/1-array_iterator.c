#include "function_pointers.h"

/**
* array_iterator - function that executes a function given as a
* parameter on each element of an array
* @size: the size of the array
* @action: pointer to the function
* @array: integer array pointer
*
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array && action)
		for (n = 0; n < size; n++)
		{
			action(array[n]);
		}
}
