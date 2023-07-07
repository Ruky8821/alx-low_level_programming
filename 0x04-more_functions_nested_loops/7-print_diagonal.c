#include "main.h"

/**
 * print_diagonal - prints character
 * @n: integer
 * Return: 0 success
 *
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 1)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0;  y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
