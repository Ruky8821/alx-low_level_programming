#include "main.h"
/**
 * reverse_array - outputs an array in reversed order.
 * @a: pointer
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
