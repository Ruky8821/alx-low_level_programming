#include "main.h"
#include <stdlib.h>
/**
 * _strlen - finds lenght of a string
 * @g: array pointer
 *
 * Return: h on success
 */
int _strlen(char *g)
{
	int h;

	for (h = 0; g[h] != '\0'; h++)
		;
	return (h);
}


/**
 * str_concat - concatenate strings
 * @s1: frst string
 * @s2: second string
 * Return: joined strings
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *k;
	int size_1, size_2;

	size_1 = _strlen(s1);
	size_2 = _strlen(s2);
	k = malloc((size_1 + size_2) * sizeof(char) + 1);
	while (s1[i])
	{
		i++;
		if (s1[i] == '\0')
			s1[i] =  (' ');
		k[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		s1[i++] = s2[j];
		k[i] = s1[i];
	}
	k[i] = '\0';
	return (k);
}
