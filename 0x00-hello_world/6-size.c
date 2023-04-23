#include <stdio.h>
/**
 * main - returns the 0 on success
 *Return: 0 (success)
 */
int main(void)
{
	printf("size of a char: %zu byte(s)\n", (unsigned long) sizeof(char));
	printf("size of an int:%zu byte(s)\n", (unsigned long) sizeof(int));
	printf("size of a long int: %zu byte(s)\n", (unsigned long) sizeof(long int));
	printf("size of a long long int:%zu byte(s)\n", (unsigned long) sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", (unsigned long) sizeof(float));
	return (0);
}
