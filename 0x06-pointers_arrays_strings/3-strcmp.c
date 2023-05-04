#include "main.h"
/**
 * _strcmp - compares two char
 * @s1: first string
 * @s2: second string
 * Return: 0, 1, -1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if  (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (0);

}
