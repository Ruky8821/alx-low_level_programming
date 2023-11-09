#include "lists.h"
/**
 * free_dlistint - frees a node
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *newNode;

	while (head)
	{
		newNode = head;
		head = head->next;
		free(newNode);
	}

}
