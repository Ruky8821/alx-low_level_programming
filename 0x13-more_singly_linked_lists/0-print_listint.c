#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: a pionter to first node
 * Return: number oof nodes on success
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

