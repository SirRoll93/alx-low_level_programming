#include "lists.h"

/**
 * free_listint2 - frees the memory allocated to a linked list
 * @head: pointer to a pointer to a node on the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	if (*head == NULL)
	{
		free(*head);
		head = NULL;
		return;
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
	head = NULL;
}
