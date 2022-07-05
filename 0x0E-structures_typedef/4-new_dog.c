#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str);

/**
 * *new_dog - function that creates a new dog
 * @name: character pointer variable
 * @age: float variable
 * @owner: character pointer variable1
 *
 * Description: function that creates a new dog
 * Return: NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	if (name == NULL || owner == NULL)
		return (NULL);
	p = malloc(sizeof(dog_t));
	if (p != NULL)
	{
		p->name = _strdup(name);
		if (p->name == NULL)
		{
			free(p->name);
			free(p);
			return (NULL);
		}
		p->age = age;
		p->owner = _strdup(owner);
		if (p->owner == NULL)
		{
			free(p->name);
			free(p->owner);
			free(p);
			return (NULL);
		}
		return (p);
	}
	return (NULL);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains the copy of the string
 * @str: charater string
 *
 * Return: address of the newly allocated memory
 */
char *_strdup(char *str)
{
	unsigned int length, n, m;
	char *str_copy;
	char *tmp = str;

	if (str == NULL)
		return (NULL);

	n = 0;
	while (*str++)
		n++;
	length = n;
	str = tmp;

	str_copy = malloc(length * sizeof(char) + 1);
	if (str_copy == NULL)
		return (NULL);

	m = 0;
	while (m < length)
	{
		str_copy[m] = str[m];
		m++;
	}
	str_copy[m] = '\0';
	return (str_copy);
}
