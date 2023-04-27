#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * Return: 0 on success
 * @c: integer
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);

}
