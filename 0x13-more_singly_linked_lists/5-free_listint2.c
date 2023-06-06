#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the head
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *cur = *head;
	listint_t *next;
	while (cur != NULL)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
	*head = NULL;


}
