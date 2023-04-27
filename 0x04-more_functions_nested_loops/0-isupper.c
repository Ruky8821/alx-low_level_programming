#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * Return: 1 on success
 * @c: integer
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
