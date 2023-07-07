#include "main.h"
#include <unistd.h>
/**
  * _putchar - write character
  * @c: letter to print
  * Return: 0 on sucess
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
