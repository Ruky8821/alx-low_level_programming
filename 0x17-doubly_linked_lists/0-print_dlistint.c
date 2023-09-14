#include "lists.h"
#include <stdio.h>
/**
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curlink = h;
	size_t i;

	i = 0;
	while (curlink != NULL)
	{
		printf("%d \n", curlink->n);
		curlink = curlink->next;
		i++;
	}
	return (i);
}
