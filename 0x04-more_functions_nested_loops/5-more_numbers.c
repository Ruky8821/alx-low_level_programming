#include "main.h"

/**
 * more_numbers - prints more than 0-9
 */

void more_numbers(void)
{
	int x, y, z;

	for (y = 0; y < 10; y++)
	{
		x = z;
		for (z = 0; z <= 14; z++)
		{
			if (z > 9)
			{
				_putchar(1);
				x = z % 10;
			}
			_putchar(x + 48);
		}
		_putchar('\n');
	}
}
