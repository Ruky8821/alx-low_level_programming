#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 on success
 */

int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;

	printf("size of a char: %zu byte(s)\n", sizeof(v));
	printf("size of an int: %zu byte(s)\n", sizeof(w));
	printf("size of a long int: %zu byte(s)\n", sizeof(x));
	printf("size of a long long int: %zu byte(s)\n", sizeof(y));
	printf("size of a float: %zu byte(s)\n", sizeof(z));

	return (0);
}

