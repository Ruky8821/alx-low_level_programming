#include "main.h"
/**
 * print_binary - outputs binary equivalent of a decimal
 * @n: decimal
 */
void print_binary(unsigned long int n)
{
	int binary, i = 1;
	unsigned long int shift = 1UL << 63;


	if (n == 0)
		_putchar('0');

	while (shift > 0)
	{
		binary = (n & shift) ? 1 : 0;
		if (binary == 1)
			i = 0;

		if (!i)
			_putchar('0' + binary);

		shift >>= 1;
	}
}

