#include "main.h"

/**
 * _isalpha - check case of letters
 * @c: takes input from another funstion
 * Return: 1 is true ,0 otherwisr
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	return (0);



}
