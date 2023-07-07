#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array with allocated memory
 * @size: bytes allocated
 * @c: character
 * Return: null for failure and cx for success
 */

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	if (x == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		x[size] = c;
	}
	return (x);
}
