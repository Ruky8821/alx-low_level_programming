#include "main.h"
/**
 * _strcpy - copy from one location to another
 * @dest: copy to
 * @src: copy from
 * Return: return dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
