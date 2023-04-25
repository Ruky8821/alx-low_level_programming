#include "main.h"
/**
 * main - Entry point
 * description: "prints without stdio"
 * Return: 0 success
 */
int main(void)
{
	char str[] = "_putchar";
	int letters;

	for (letters = 0; letters < 8; letters++)
		_putchar(str[letters]);
	_putchar('\n');

	return (0);
}
