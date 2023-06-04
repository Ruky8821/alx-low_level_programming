#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: a string
 * Return: returns lenght of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len += 1;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);

}
