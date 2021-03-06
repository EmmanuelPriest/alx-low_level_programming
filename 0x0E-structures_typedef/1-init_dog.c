#include "dog.h"
#include <stdio.h>

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to name variable
 * @age: float variable
 * @owner: pointer to owner variable
 *
 * Description: The function that initialize a variable of type struct dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
