#include "main.h"
/**
 * _pow_recursion - returns the vluse of s power
 * @x:  base number
 * @y: power
 * Return: the value of base number to a power
 */
int _pow_recursion(int x, int y)
{
	int pow = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	pow = x * _pow_recursion(x, y - 1);
	return (pow);

}
