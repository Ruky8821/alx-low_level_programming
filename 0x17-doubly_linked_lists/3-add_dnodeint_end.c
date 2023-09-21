#include "lists.h"
/**
 * *add_dnodeint_end - inserts a node at the end of the <->
 * @head: first node
 * @n: data
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		dlistint_t *temp = *head;

		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
