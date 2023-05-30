#include "main.h"
/**
 * _print_rev_recursion -wcadsts the aee
 * @s: string
 *
 */
void _print_rev_recursion(char *s)
{
	int i;
	int n = 0;
	char tmp;

	for (i = 0; *s != '\0'; i++)
	{
		n++;
	}

	for (i = 0; i < n / 2; i++)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmp;
		_putchar(s[n - i - 1]);
	}
}
