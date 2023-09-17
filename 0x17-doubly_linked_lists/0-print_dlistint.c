#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints elements of a <->
 * @h: head
 * Return: length of <->	
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
		return (i);
	while (h)
	{
		printf("%d \n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
