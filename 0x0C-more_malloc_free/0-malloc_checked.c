#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function allocates memeory
 * @b: size in bytes to allocate
 * Return: returns p on success and 98 if fail
 *
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
