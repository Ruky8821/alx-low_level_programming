#include "main.h"
/**
 * clear_bit - returns decimal value at a given index
 * @n: pointer to given number
 * @index: index to search
 * Return: 1 (success) or -1 (fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int typemask = 1UL << index;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);


	*n = ~typemask & *n;
	return (1);
}
