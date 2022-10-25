#include "lists.h"

/**
 * free_listint - frees up the memory allocated to the linked list
 * @head: pointer to a node on the linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
