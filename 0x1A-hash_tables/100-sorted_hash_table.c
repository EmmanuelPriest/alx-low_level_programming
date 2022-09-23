#include "hash_tables.h"

/**
* shash_table_create - function that creates a sorted hash table
* @size: The size of the sorted hash table
*
* Return: a pointer to the newly sorted hash table, otherwise NULL
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashTable;
	unsigned long int n;

	hashTable = malloc(sizeof(shash_table_t));
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = malloc(sizeof(shash_node_t *) * size);
	if (hashTable->array == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		hashTable->array[n] = NULL;
	hashTable->shead = NULL;
	hashTable->stail = NULL;

	return (hashTable);
}

/**
* shash_table_set - function that adds an element to the sorted hash table
* @ht: The sorted hash table to be added to
* @key: The key to the sorted hash table
* @value:The value associated with the key
*
* Return: 1 if it succeeded, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *temp;
	char *valcpy;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valcpy = strdup(value);
	if (valcpy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = valcpy;
			return (1);
		}
		temp = temp->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(valcpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(valcpy);
		free(new);
		return (0);
	}
	new->value = valcpy;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new->sprev = temp;
		new->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new;
		else
			temp->snext->sprev = new;
		temp->snext = new;
	}

	return (1);
}

/**
* shash_table_get - function that retrieves a value associated
* with a key in a sorted hash table
* @ht: The sorted hash table to be looked into
* @key: The key to be looked for
*
* Return: the value associated with the element,
* or NULL if key couldn’t be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nd;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	nd = ht->shead;
	while (nd != NULL && strcmp(nd->key, key) != 0)
		nd = nd->snext;

	return ((nd == NULL) ? NULL : nd->value);
}

/**
* shash_table_print - function that prints a sorted hash table
* @ht: The sorted hash table
*
* Return: nothing
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->shead;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->snext;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
* shash_table_print_rev - function that prints a sorted hash table in reverse
* @ht: The sorted hash table to br printed
*
* Return: nothing
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->stail;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->sprev;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
* shash_table_delete - function that deletes a sorted hash table
* @ht: The sorted hash table to be deleted
*
* Return: nothing
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *h = ht;
	shash_node_t *nd, *temp;

	if (ht == NULL)
		return;

	nd = ht->shead;
	while (nd)
	{
		temp = nd->snext;
		free(nd->key);
		free(nd->value);
		free(nd);
		nd = temp;
	}

	free(h->array);
	free(h);
}
