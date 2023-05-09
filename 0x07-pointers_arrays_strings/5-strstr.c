#include "main.h"
/**
 * _strstr - locates a substring needle in haystack
 * @haystack: main string to be searched
 * @needle: substring to find
 * Return: pointer to beginning of substring or 0 if not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*haystack != '\0')
	{
		while (haystack == needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
