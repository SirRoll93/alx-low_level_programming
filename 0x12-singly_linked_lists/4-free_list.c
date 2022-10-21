#include "lists.h"

/**
 * free_list - frees up all the memory allocated for a list
 * @head: points to a node on the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		free(head->str);
		head = head->next;
		free(temp);
	}
}
