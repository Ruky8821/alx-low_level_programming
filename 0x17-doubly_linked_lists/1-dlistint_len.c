#include "lists.h"
/**
 * dlistint_len -  returns length of a doubly linked list
 * @h: header
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t y;

	y = 0;
	while(h)
	{
		h= h->next;
		y++;
	}
	return (y);
}
	
