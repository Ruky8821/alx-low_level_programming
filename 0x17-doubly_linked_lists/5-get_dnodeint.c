#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node at an index
 * @head:  head
 * @index: specified inx
 * Return: NULL is does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;

	if (head)
	{
		if (x == index)
			return (head);
		head = head->next;
		x++;
	}
	return (NULL);
}
