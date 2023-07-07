#include <stdio.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int g;

	for (g = 0; g < argc; g++)
	{
	printf("%s\n", argv[g]);
	}
	return (0);
}
