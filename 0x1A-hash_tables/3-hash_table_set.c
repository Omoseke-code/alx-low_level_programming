#include "hash_tables.h"

/**
 * ht_pair - sets the key and value
 * @key: key
 * @value: value
 * Return: new entry
 */
hash_node_t *ht_pair(const char *key, const char *value)
{
	hash_node_t *entry = malloc(sizeof(hash_node_t));

	entry->key = malloc(strlen(key) + 1);
	entry->value = malloc(strlen(value) + 1);

	strcpy(entry->key, key);
	strcpy(entry->value, value);

	entry->next = NULL;

	return (entry);
}
/**
 * hash_table_set -  a function that adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1 on success and 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *entry = NULL, *prev;
	unsigned int slot = 0;

	if (key == NULL || value == NULL || ht == NULL || *key == '\0')
		return (0);

	slot = key_index((const unsigned char *) key, ht->size);
	entry = ht->array[slot];

	if (entry == NULL)
	{
		ht->array[slot] = ht_pair(key, value);
		return (1);
	}

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			entry->value = malloc(strlen(value) + 1);
			strcpy(entry->value, value);
			return (1);
		}

		prev = entry;
		entry = prev->next;
	}

	prev->next = ht_pair(key, value);

	return (1);
}
