#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Entry point
 * @ptr: pointer to allocated memory
 * @old_size: old array to be copied
 * @new_size: new memory to be allocated
 * Return: p on sucess
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	unsigned int i = 0;

	s = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		if (s == NULL)
			return (NULL);
		return (s);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (; i > old_size && i > new_size; i++)
			s[i] = *(char *)ptr + i;
		free(ptr);
	}
	return (s);
}
