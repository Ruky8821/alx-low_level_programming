#include "main.h"
/**
 * _memset - fills n byte of s with int s
 * @s: pointer to integer
 * @b: integer
 * @n: bytes to fill
 * Return: returns s on success
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
