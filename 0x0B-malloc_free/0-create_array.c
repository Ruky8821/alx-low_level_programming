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
		return (0);
	}
	for (; x != 0; size--)
	{
		x[size] = c;
	}
	return (x);
}
