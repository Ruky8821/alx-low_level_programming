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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= y; x++)
		{
			for (y = 1; y <= x; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
		}
		_putchar('\n');
	}
}
