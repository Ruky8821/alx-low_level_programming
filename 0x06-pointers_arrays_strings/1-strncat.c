#include "main.h"
/**
 * _strncat - concatenate with condition of n bytes
 * @dest: first string
 * @src: second string
 * @n: bytes
 * Return: characters
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
