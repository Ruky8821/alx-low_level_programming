#include "lists.h"
/**
 * free_dlistint -  frees a list
 * @head: head of the struct list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *newNode;

	if (head)
	{
		newNode = head;
		head = head->next;
		free(newNode);
	}
}
