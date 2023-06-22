#include "lists.h"
/**
 * get_nodeint_at_index -  get index of node in a lit
 * @head: address of first node
 * @index: index of nodes
 * Return: index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;
	listint_t *cur = head;

	while (cur != NULL)
	{
		if (cnt == index)
			return (cur);
		cur = cur->next;
		cnt++;
	}
	return (NULL);
}
