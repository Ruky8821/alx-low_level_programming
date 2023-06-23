#include "main.h"
/**
 * print_binary - outputs binary equivalent of a decimal
 * @n: decimal
 */
void print_binary(unsigned long int n)
{
	int bnry, ldz = 1;
	unsigned long int sfop = 1UL << 63;


	if (n == 0)
		_putchar('0');

	while (sfop > 0)
	{
		bnry = (n & sfop) ? 1 : 0;
		if (bnry == 1)
			ldz = 0;

		if (!ldz)
			_putchar('0' + bnry);

		sfop >>= 1;
	}
}
