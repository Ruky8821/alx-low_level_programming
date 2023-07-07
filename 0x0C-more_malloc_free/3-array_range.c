#include "main.h"
#include <stdlib.h>
/**
 * array_range - arrange array in range
 * @min: lower limit
 * @max: upper limit
 * Return: pointer on success
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (!ptr)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
