#include "hash_tables.h"


/**
 * create_node - a function that creates a new hash table array node
 * @key: the key
 * @value: the value
 * Return: a pointer to the newly created hash table array node
 */
hash_node_t *create_node(const unsigned char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	/* TODO-DONE: use strcpy if `assignment operator` fails */
	new_node->key = strdup((char *)key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key.
 *       @key cannot be an empty string.
 * @value: the value associated with the key.
 *         @value must be duplicated.
 *         @value can be an empty string
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *ptr;

	if (ht == NULL || strcmp(key, "") == 0)
		return (0); /* TODO-DONE: do something here */

	index = key_index((const unsigned char *)key, ht->size);
	temp = create_node((const unsigned char *)key, value);
	if (temp == NULL)
		return (0); /* TODO-DONE: malloc failed. Do something */

	/* Case 1: no collision */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = temp;
		temp = NULL;
		return (1);
	}

	/* case 2: collision occured */
	/* case 2a: replace value if key exists in linked list */
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value); /* very very important line */
			ptr->value = strdup(value);
			free(temp->key), free(temp->value);
			free(temp), temp = NULL;
			return (1);
		}
		ptr = ptr->next;
	}
	/* case 2b: add to top of bucket if keys are different */
	temp->next = ht->array[index];
	ht->array[index] = temp;
	return (1);
}
