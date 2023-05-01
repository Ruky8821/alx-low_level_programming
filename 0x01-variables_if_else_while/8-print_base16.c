#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int p, q;

	for (p = 0; p <= 9; p++)
	{
		putchar(p + 48);
	}
	for (q = 97; q <= 102; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
