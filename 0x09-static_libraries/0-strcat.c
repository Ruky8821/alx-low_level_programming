#include "main.h"
/**
 * _strcat - concatenate strings
 * @dest: frst string
 * @src: second string
 * Return: joined strings
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; src[j]; j++)
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
