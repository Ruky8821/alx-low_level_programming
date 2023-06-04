#include "main.h"
/**
 * factorial -  returns the factorial of a number
 * @n: given number
 * Return: the facturial or 1- if fails
 */
int factorial(int n)
{
	int fact;

	if (n > 0)
	{
		fact = n * factorial(n - 1);
	}
	else if (n == 0)
		return (1);
	else
		return (-1);
	return (fact);
}
