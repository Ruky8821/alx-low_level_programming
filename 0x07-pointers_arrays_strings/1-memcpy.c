#include "main.h"
/**
 * _memcpy - copy n bytes for one memory to another
 * @dest: memory to copy to
 * @src: memory to copy to
 * @n: bytes to copy
 * Return: returns dest on success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0; /* counter*/

	for  (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
