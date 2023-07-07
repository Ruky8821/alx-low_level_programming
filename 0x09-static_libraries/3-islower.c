#include "main.h"

/**
  * _islower - check if lower case
  * @c: each letter
  * Return: 1 lower, 0 otherwise
  */

int  _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
