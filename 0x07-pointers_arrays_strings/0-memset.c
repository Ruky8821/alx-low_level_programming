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
	int i;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
