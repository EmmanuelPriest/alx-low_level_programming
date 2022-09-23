#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table
* @ht: The hashtable to be added or updated to
* @key: The key
* @value: The value associated with the key
*
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *valcpy;
	unsigned long int idx, n;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valcpy = strdup(value);
	if (valcpy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (n = idx; ht->array[n]; n++)
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = valcpy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(valcpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = valcpy;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
