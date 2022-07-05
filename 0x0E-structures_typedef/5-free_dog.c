#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - function that frees dogs
* @d: dog to be freed
*
* Description: Using free_dog function to write a program that frees dog
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
/**
* Fixing of betty documentation error message that says - no description
* found for function <function-name>
* when commenting make sure you do not use space bar before the astericks (*)
* or leave whitespace before the asterisks (*)
* the whitespace should come after the asterisks (*) and then the write up
*/
