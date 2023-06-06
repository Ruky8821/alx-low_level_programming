#include "lists.h"
/**
 * free_listint2 - frees the memeory allocated to the node
 * @head: pointer to first node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *cur;

	while (head)
	{
		cur = head->next;
		free(head);
		head = cur;
	}
}

