#include "variadic_functions.h"
/**
 * sum_them_all - a function that sums a variable list of integers
 * @n: number of integers
 * @...: variable list of arguments
 * Return: sum if successful
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum;
	va_list cont;

	sum = 0;

	if (n == 0)
		return (0);
	va_start(cont, n);

	/* looping through the list*/
	for (; i < n; i++)
		sum = sum + va_arg(cont, int);
	va_end(cont);
	return (sum);
}
