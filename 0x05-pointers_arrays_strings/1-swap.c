#include "main.h"

/**
 * swap_int - interchanges numbers
 * @a: integer
 * @b: integer
 */

void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
