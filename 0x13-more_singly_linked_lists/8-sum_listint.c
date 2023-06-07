#include "lists.h"
/**
 * sum_listint - sum of data in a list
 * @head: adrress of fisrt node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum_n;
	listint_t *cur;

	if (head == NULL)
		return (0);

	sum_n = 0;
	cur = head;

	while (cur != NULL)
	{
		sum_n += cur->n;
		cur = cur->next;
	}

	return (sum_n);
}
