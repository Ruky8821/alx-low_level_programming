#include "main.h"
/**
 * _strlen - returns the lenght of string
 * @s: pointer
 * Return: return length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;
	return (i);
}
