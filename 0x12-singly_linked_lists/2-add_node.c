#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node to a linked list
 * @str: a pointer to data part of the linked list
 * @head: the holds the address of the first node
 * Return: *head on success or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	/** lenght of str */
	while (str[len] != '\0')
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (!head)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}
