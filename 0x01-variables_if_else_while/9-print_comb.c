#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int p;

	for (p = 48; p <= 56; p++)
	{
		putchar(p);
		putchar(44);
	}
	putchar(57);
	putchar('\n');
	return (0);
}
