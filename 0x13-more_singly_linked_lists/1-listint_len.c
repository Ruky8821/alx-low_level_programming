#include "lists.h"
/**
 * listint_len - returns the number of elemen ts in a linked list
 * @h: pointer to first element
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
