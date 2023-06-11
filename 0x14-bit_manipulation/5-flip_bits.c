#include "main.h"
/**
 * flip_bits - flips bits when different
 * @n: first number
 * @m: second number
 * Return: number of bits that needs to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned int fliped = n ^ m;

	while (fliped != 0)
	{
		if (fliped & 1)
			count++;

		fliped >>= 1;
	}
	return (count);
}
