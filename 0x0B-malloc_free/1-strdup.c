#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  pointers to a duplicate array
 * @str: a pointer to an array
 * Return: rutens pointer or NULL
 */
char *_strdup(char *str)
{
	int i = 0;
	int j;
	char *p = malloc(sizeof((*str) * j) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		if (i <= j)
		{
			p[i] = str[i];
			i++;
		}
		else
		{
			return (NULL);
		}
	}
	return (p);
}
