#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocate memory and inities with 0
 * @nmemb: number of elements
 * @size: size of element
 * Return: pointer to memeory allocate on success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < size * nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
