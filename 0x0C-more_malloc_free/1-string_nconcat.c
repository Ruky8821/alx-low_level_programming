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
	unsigned int m, p, x, y, size_s1 = 0;

	p = 0;
	m = 0;
	/* length of string */
	for (x = 0; s1[x] != '\0'; x++)
		size_s1 = x;
	for  (y = 0; s2[y] != '\0'; y++)
		;
	/*checking is string passed is null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	sptr = malloc(size_s1 + n + 1);
	if (sptr == NULL)
		return (NULL); /* s1 and s2 are empty*/
	/**
	*for (m = 0; s1[m] != '\0'; m++)
	*	sptr[m] = s1[m];
	*/
	while (s1[m] != '\0')
	{
		m++;
	}
	for (p = 0; p < n; p++)
	{
		s1[m] =  s2[p];
		m++;
	}
	sptr[m] = s1[m];
	sptr[m] = '\0';
	return (sptr);
}
