#include "lists.h"

/**
 * sum_listint - gets the sum of all the contents of the linked list
 * @head: a pointer to the head node of a linked list
 *
 * Return: sum of the content of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
