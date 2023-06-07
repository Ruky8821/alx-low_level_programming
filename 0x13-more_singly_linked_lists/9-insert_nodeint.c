#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at any point
 * @head: first node
 * @idx: index
 * @n: data
 * Return: address of new noe
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		listint_t *cur = *head;

		if (i < idx - 1)
		{
			if (cur == NULL)
			{
				free(new_node);
				return (NULL);
			}
		cur = cur->next;
		i++;
		}

		if (cur == NULL)
		{
			free(new_node);
			return (NULL);
		}


		new_node->next = cur->next;
		cur->next = new_node;
	}
	return (new_node);
}
