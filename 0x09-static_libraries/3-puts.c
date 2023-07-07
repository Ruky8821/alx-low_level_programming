#include "main.h"
/**
 * _puts - Entry point
 * @str: string variable
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
