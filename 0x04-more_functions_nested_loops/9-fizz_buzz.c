#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0 success
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("fizz");
		}
		if (n % 5 == 0)
		{
			printf("buzz");
		}
		if ((n % 3 == 0) && (n & 5 == 0))
		{
			printf("fizzBuzz");
		}
		else
		{
			printf("%d", n);
		}
	}
	_putchar('\n');
	return (0);
}
