#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int p;

	for (p = 122; p >= 97; p--)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
