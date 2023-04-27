#include "main.h"

/**
 * _isdigit - check if 0 -9
 * @c: integer
 * Return: 1 on success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
