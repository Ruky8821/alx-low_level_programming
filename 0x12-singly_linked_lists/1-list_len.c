#include "lists.h"
/**
 * list_len - returns number of elements in the linked list
 * @h: pointer to head->next
 * Return: i 0n success
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}
