#include "main.h"

/**
  * print_sign - prints n> 0, 0 for n<= 0
  * @n: integers
  * Return: based on output
  */

int print_sign(int n)

	if (n > 0)
	{
		_ptchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putcahr(45);
		return (-1);
	}
}
