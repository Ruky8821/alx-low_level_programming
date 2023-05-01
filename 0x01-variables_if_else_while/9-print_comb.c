#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int p;

	for (p = 0; p <= 8; p++)
	{
		putchar(p + 48);
		putchar(44);
	}
	putchar(9 + 48);
	putchar('\n');
	return (0);
}
