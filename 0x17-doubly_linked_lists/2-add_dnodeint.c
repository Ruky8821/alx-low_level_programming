#include "lists.h"
/**
 * *add_dnodeint -  insert at beginning
 * @head: first
 * @n: data
 * Return: new address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head)
		return (NULL);
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;

	if (*head)
	{
		new->next = *head;
		(*head)->prev =  new;
		(*head) = new;
	}
	else
	{
		*head = new;
		new->next = NULL;
	}
	return (new);

}
