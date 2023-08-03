#include "main.h"
/**
 * flip_bits - counts ho many bits in n where negated to reach m
 * @n: first binary  number
 * @m: second binary  number
 * Return: number of bits that fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;

	unsigned int long bit_fliped = n ^ m;

	while (bit_fliped != 0)
	{
		if (bit_fliped & 1)
			counter++;

		bit_fliped >>= 1;
	}
	return (counter);
}

