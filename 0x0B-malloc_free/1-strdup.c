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
		if (p == 0)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < j; i++)
			{
				p[i] = str[i];
			}
			p[i + 1] = '\0';
		}
	}
	return (p);
}