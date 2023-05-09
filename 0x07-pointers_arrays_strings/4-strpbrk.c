#include "main.h"
/**
 * _strpbrk - searches for the first occurrence of s in acceptance
 * @s: string to find
 * @accept: string to search
 * Return: returns a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0') /*to iterate through the entire array*/
	{
		while (accept[j] != '\0') /*to iterate through the entire array*/
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
			j++;
		}
		i++;
	}
	return (0);

}
