#include <stdio.h>
/**
 * main -  entry point
 * @argc: argument counter
 * @argv: argument array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
