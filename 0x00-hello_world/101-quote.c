#include <stdio.h>
/**
 * main - 0 on success
 *
 * description: output without the use of printf, cut
 * Return: Always 0 (Success)
 */
int main(void)
{
	char say[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, say, 59);
	return (1);
}
