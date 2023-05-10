#include "main.h"

/**
 * _puts_recursion - prints a stirng with null at the end
 * @s: a string
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\0');
}
