#include "main.h"

/**
 * print_numbers - prints 0 -9
 * Return: 0 sucess
 */

void print_numbers(void)
{
	int c = 48;

	do {
		_putchar(c);
		c++;
	} while (c >= 48 && c <= 57);
		_putchar('\n');
}
