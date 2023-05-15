#include "main.h"
/**
 * _strncpy -  copy string of n length
 * @dest: copy destination
 * @src: string to copy
 * @n: Integer
 * Return:return character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
