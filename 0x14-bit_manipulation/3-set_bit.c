#include "main.h"
/**
 * set_bit - Gives the binary value at a given index replaced by 1
 * @n: pointer to the number
 * @index: index to insert 1
 * Return: 1  on success or -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask1 = 1UL << index;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);


	*n = mask1 | *n;
	return (1);
}
