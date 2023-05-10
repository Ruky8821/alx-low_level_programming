#include "main.h"

/**
 * _puts_recursion - prints a stirng with null at the end
 * @s: a string
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(s[i] = '\0');
	_putchar('\n');
}
