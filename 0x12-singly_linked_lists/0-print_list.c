#include "lists.h"

/**
 * print_list -  prints content and lenght of the node
 * @h: a pointer to the next
 * Return: i on success
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str ==  NULL)
			printf("[0]\n");
		else
		{
			printf("[%u]%s\n", h->len, h->str);		
		}
		i++;
	}
	return (i);

}
