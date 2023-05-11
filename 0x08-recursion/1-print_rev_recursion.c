#include "main.h"
/**
 * _print_rev_recursion -wcadsts the aee
 * @s: string
 *
 */
void _print_rev_recursion(char *s)
{
	int i, j;
	int n = 0;

	for (i = 0; *s != '\0'; i++)
	{
		n++;
	}

	for (j = n - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
