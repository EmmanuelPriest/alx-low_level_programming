#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void free_dog(dog_t *d);

 /**
 * free_dog - function that frees dogs
 * @d: dog to be freed
 *
 * Description: writing a function that frees dogs
 * Return: nothing
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
