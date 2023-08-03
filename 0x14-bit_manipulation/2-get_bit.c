#include "main.h"
/**
 * get_bit - returns decimal value at a given index
 * @n: given number
 * @index: index to search
 * Return: value at index (success) or -1 (fail)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);


	value = (n >> index) & 1;
	return (value);
}
