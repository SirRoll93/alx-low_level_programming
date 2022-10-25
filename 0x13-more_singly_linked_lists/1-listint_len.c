#include "lists.h"

/**
 * listint_len - count the elements in the list
 * @h: start point of the list
 * Return: number of the elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
