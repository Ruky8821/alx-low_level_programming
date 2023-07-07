#include "lists.h"
/**
 * add_node_end - function adds anew node at the end of a list
 * @head: beginning block of address
 * @str: string
 * Return: new node on success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *buffer = *head;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	while (str[len])
		len++;
	new->len = len;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (buffer->next)
		buffer = buffer->next;
	buffer->next = new;
	return (new);
}
