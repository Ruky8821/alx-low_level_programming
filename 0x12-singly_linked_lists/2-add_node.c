#include "lists.h"

/**
 * add_node - adds a new node.
 * @head: pointer to the list
 * @str: new string to add
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
    /** Calculate the length of the string manually */
	int len = 0;

	while (str[len] != '\0')
		len++;

	new->str = (char *) malloc((len + 1) * sizeof(char));
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str[len] = '\0';
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}
