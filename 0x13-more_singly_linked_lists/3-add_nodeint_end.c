#include "lists.h"
/**
 * add_nodeint_end -  adds a node at the end of a linked list
 * @head: [pointer to the first node
 * @n: interger data stored in the node
 * Return: address of new node on success or NUll if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cur = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (cur->next != NULL)
			cur  = cur->next;
		cur->next = new;
	}
	return (*head);
}
