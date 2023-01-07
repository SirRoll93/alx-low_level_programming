#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table or NULL(ON FAILURE)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long i;

	if (size == 0 || size > ULONG_MAX)
		return (NULL);

	/* create new hash table */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* allocate memory for hash table array of items */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* initialize the value of size */
	new_table->size = size;

	/* initialize elements of hash table with NULL */
	for (i = 0; i < new_table->size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
