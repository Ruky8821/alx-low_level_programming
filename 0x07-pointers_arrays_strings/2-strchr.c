#include "main.h"
/**
 * _strchr - returns a pointer at first occurensce of c
 * @s: poi @c: character
 * @c: character
 * Return: returns c
 */

char *_strchr(char *s, char c)
{
	int i = 0;       /* counter */


	for (; i <=  '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	 return ('\0');
}
