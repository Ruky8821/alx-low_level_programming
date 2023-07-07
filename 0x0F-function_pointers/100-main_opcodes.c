#include <stdio.h>
#include <stdlib.h>
/**
 * main - entryn point
 * @argc: number of argument
 * @argv: array vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int byte, i = 0;
	unsigned int *opcd;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[byte]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	int check(int, char *);

	opcd = check;
	for (; i < byte; i++)
	{
		check = main;
		printf("%.2x", opcd);
		if (i == byte - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
