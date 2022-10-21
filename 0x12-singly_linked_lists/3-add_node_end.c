#include "lists.h"

/**
 * get_length - returns the length of a string
 * @str: string parameter
 *
 * Return: length of @str
 */
unsigned int get_length(const char *str)
{
	int i, length = 0;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

/**
 * add_node_end - adds a new node to end of linked list
 * @head: pointer to pointer to linked list
 * @str: used to set the str attribute of the new node
 *
 * Return: address of linked list of NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	unsigned int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	len = get_length(str);
	last = *head;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (*head);
}
