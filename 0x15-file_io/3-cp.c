#include "main.h"
/**
 * main - a program that copies the content of one file into another
 * @arg: number of argument
 * @argv: array of argument
 * Return: 1 (success), 0 (failure)
 */
int main(int arg, char **argv)
{
	int from_file = 0, to_file = 0;
	char *buffer;
	ssize_t rd_op, wr_op;

	if (arg != 3)
	{
		dprintf(2, USE);
		exit(97);
	}
	buffer = malloc(BUFFER_S * sizeof (char));
	if (buffer == NULL)
		return (0);
	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1)
	{
		dprintf(2, READERR, argv[1]);
		exit(98);
	}
	to_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664 );
	if (to_file == -1)
	{
		dprintf(2, WRITERR, argv[2]);
		exit(99);
	}
	rd_op = read(from_file, buffer, BUFFER_S);
	if (rd_op == -1)
		dprintf(2, READERR, argv[1]), exit(98);

	wr_op = write(to_file, buffer, rd_op);

	while (rd_op > 0)
		if (wr_op != rd_op)
			dprintf(2, WRITERR, argv[2]), exit(99);
	close(from_file);
	close(to_file);
	if (!close(from_file))
		dprintf(2, FDERR, from_file), exit(100);
	if (!close(to_file))
		dprintf(2, FDERR, to_file), exit(100);
	return (1);
}
