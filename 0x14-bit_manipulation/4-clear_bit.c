#include "main.h"
/**
 * clear_bit - sets a value at a given index like inserting 0 at the index
 * @n: pointer to given number
 * @index: index to search
 * Return: 1 on success or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask1 = 1UL << index;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);


	*n = ~mask1 & *n;
	return (1);
}
