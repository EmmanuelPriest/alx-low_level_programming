#include "hash_tables.h"

/**
* hash_table_delete - function that deletes a hash table
* @ht: The hash table to be deleted
*
* Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *nd, *temp;
	unsigned long int n;

	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			nd = ht->array[n];
			while (nd != NULL)
			{
				temp = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = temp;
			}
		}
	}
	free(h->array);
	free(h);
}
