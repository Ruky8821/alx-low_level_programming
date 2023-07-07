#include "lists.h"

/**
 * _strlen - returns the lenght if a string
 * @s: string
 * Return: len on success
 */
size_t _strlen(const char *s)
{
	char s[];
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
