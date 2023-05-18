#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concates two strings and allocates memory
 * @s1: first string passed
 * @s2: second string passed
 * @n:  bytes of s2 to concate
 * Return: returns 0 on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sptr;
	unsigned int m, p, x, y, size_s1, size_s2;

	/* length of string */
	for (x = 0; x != '\0'; x++)
		size_s1 = x;
	for  (y = 0; y != '\0'; y++)
		size_s2 = y;
	/*checking is string passed is null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < size_s2)
	{
		sptr = malloc(size_s1 + n + 1);
		for (m = 0; s1[m] != '\0'; m++)
			sptr[m] = s1[m];
		for (p = 0; s2[p] != '\0'; p++)
		{
			sptr[m] =  s2[p];
			m++;
		}}
	if (n >= size_s2)
	{
		sptr = malloc(size_s1 + size_s2 + 1);
		for (m = 0; s1[m] != '\0'; m++)
			sptr[m] = s1[m];
		for (p = 0; s2[p] != '\0'; p++)
		{
			sptr[m] =  s2[p];
			m++;
		}}
		sptr[m] = '\0';
		return (sptr);
}
